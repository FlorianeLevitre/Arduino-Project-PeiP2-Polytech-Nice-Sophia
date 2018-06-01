///////////////////////////////////////////////////////////
//                   Module Bluetooth                    //
///////////////////////////////////////////////////////////

#include <SoftwareSerial.h> //Software Serial Port 
  
#define RxD 10    //Pin 10 pour RX, PB2 sur carte Arduino, a brancher sur le TX du HC-06
#define TxD 11    //Pin 11 pour TX, PB3 sur carte Arduino, a brancher sur le RX du HC-06
SoftwareSerial BTSerie(RxD,TxD);  

///////////////////////////////////////////////////////////
//                        FIN                            //
///////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////
//       Capteur humidité de l'air et température        //
///////////////////////////////////////////////////////////

#include "DHT.h" //On importe la librairie
#define DHTPIN 6 //On Connecte le DHT11 à la pin6
#define DHTTYPE DHT11 //DHTYPE est un type défini dans la librairie, DHT11 est une constante de ce type
DHT dht(DHTPIN, DHTTYPE); //On dit que notre capteur DHT11 est connecté à la pin7

const int led=5;

///////////////////////////////////////////////////////////
//                        FIN                            //
///////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////
//                Capteur humidité du sol                //
///////////////////////////////////////////////////////////

//Humidité sol
int PinAnalogiqueHumidite=A1;                           //Sortie analogique de mesure d'humidité
int PinNumeriqueHumidite=2;                             //Sortie numérique de mesure d'humidité
int PinLed=3;                                           //LED témoin de seuil de sécheresse

int hsol;                                               //Humidité du sol, mesure analogique
int secheresse;                                         //0 ou 1 si seuil atteint

///////////////////////////////////////////////////////////
//                        FIN                            //
///////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////
//                Capteur luminosité                     //
///////////////////////////////////////////////////////////

const int ledL=4;

///////////////////////////////////////////////////////////
//                        FIN                            //
///////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////
//                Capteur pH du sol                      //
///////////////////////////////////////////////////////////

int tensPH;
const int ledPH=7;

///////////////////////////////////////////////////////////
//                        FIN                            //
///////////////////////////////////////////////////////////



void setup() {
  
  ///////////////////////////////////////////////////////////
  //                   Module Bluetooth                    //
  ///////////////////////////////////////////////////////////

  Serial.begin(9600); //Définition de la vitesse de transfert des données
  //Configuration du bluetooth  
  pinMode(RxD, INPUT);  
  pinMode(TxD, OUTPUT);  
  BTSerie.begin(9600); 
  delay(100);

  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////



  ///////////////////////////////////////////////////////////
  //       Capteur humidité de l'air et température        //
  ///////////////////////////////////////////////////////////

  dht.begin(); //Fonction définie dans la librairie
  pinMode(led,OUTPUT);

  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////


  ///////////////////////////////////////////////////////////
  //                Capteur humidité du sol                //
  ///////////////////////////////////////////////////////////
  
  pinMode(PinAnalogiqueHumidite, INPUT);            
  pinMode(PinNumeriqueHumidite, INPUT);               
  pinMode(PinLed, OUTPUT); 
  
  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////



  ///////////////////////////////////////////////////////////
  //                Capteur luminosité                     //
  ///////////////////////////////////////////////////////////

  pinMode(ledL,OUTPUT);

  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////


    
  ///////////////////////////////////////////////////////////
  //                Capteur pH du sol                      //
  ///////////////////////////////////////////////////////////
  
  pinMode(ledPH, OUTPUT);
  
  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////

}

void loop() {

  ///////////////////////////////////////////////////////////
  //                   Module Bluetooth                    //
  ///////////////////////////////////////////////////////////

  char recvChar;  
  //On lit caractere par caractere sur le BTSerie et on affiche sur le Terminal Serie  
  if (BTSerie.available()) {  
    recvChar = BTSerie.read(); //lecture  
    Serial.print(recvChar);  //ecriture
  }  
  //On lit caractere par caractere sur le terminal et on affiche sur le BT Serie 
  if (Serial.available()) {  
    recvChar = Serial.read(); //lecture
    BTSerie.write(recvChar);  //ecriture
  }  

  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////



  ///////////////////////////////////////////////////////////
  //       Capteur humidité de l'air et température        //
  ///////////////////////////////////////////////////////////

  int h = dht.readHumidity(); //On lit l'humidité, (fonction définie dans la librairie)
  int t = dht.readTemperature(); //On lit la température, (fonction définie dans la librairie)

  Serial.print("Humidite : "); //On écrit l'humidité de l'air sur le moniteur            
  Serial.print(h);
  Serial.println(" %");                     
  delay (2500);

  Serial.print("Temperature: "); //On écrit la température sur le moniteur                 
  Serial.print(t);
  Serial.println(" degres");                   
  delay (2500);

  if ((t<20)||(h<40)) {
    digitalWrite(led,LOW);} //la led s'allume, il fait froid et sec
  else{
    digitalWrite(led,HIGH);} //La led s'éteint

  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////



  ///////////////////////////////////////////////////////////
  //                Capteur humidité du sol                //
  ///////////////////////////////////////////////////////////
  
  hsol = analogRead(PinAnalogiqueHumidite);           //Lit la tension analogique
  secheresse = digitalRead(PinNumeriqueHumidite);     //Lit la tension numérique
  Serial.print("Valeur du seuil: ");
  Serial.println(secheresse);                         //0 ou 1 si le seuil est dépassé
  if (secheresse==1)                                  //On a une tension comprise entre 542 et 1023 : terre sèche 
    {
      digitalWrite(PinLed, LOW);                      //LED allumée
    }
    else {                                            //On a une tension comprise entre 0 et 541 : terre humide 
    digitalWrite(PinLed, HIGH);                       //LED éteinte
     }
  delay(5000);                                         //delai entre 2 mesures

  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////



  ///////////////////////////////////////////////////////////
  //                Capteur luminosité                     //
  ///////////////////////////////////////////////////////////

  int value=analogRead(A2);
  Serial.print("Luminosite: ");
  Serial.println(value);
  delay(1000);
  if (value<150){
    digitalWrite(ledL,HIGH);} //La led est éteinte, la luminosité est bonne
  else{
    digitalWrite(ledL,LOW);} //La led s'allume, il n'y a pas assez de luminosité

  //Quand la pièce est éclairée à la lumière du jour, la LED est éteinte. 
  //Quand on cache le capteur pour simuler une trop faible luminosité, la LED s'allume

  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////



  ///////////////////////////////////////////////////////////
  //                Capteur pH du sol                      //
  ///////////////////////////////////////////////////////////
  
  tensPH=analogRead(A3);
  Serial.print("Tension Ph: ");
  Serial.println(tensPH);
  Serial.println("");
  delay(500);
  
  if (tensPH<60){
    digitalWrite(ledPH,HIGH);} //La led est éteinte, le sol est basique
  else{
    digitalWrite(ledPH,LOW);} //La led s'allume, le sol est est acide
    
  ///////////////////////////////////////////////////////////
  //                        FIN                            //
  ///////////////////////////////////////////////////////////



  ///////////////////////////////////////////////////////////
  //        Transmission des données au smartphone         //
  ///////////////////////////////////////////////////////////
  

  //Température de l'air 
  BTSerie.write("*T");
  BTSerie.print(t);
  BTSerie.write("*");
  delay(100);

  //Humidité de l'air 
  BTSerie.write("*H");
  BTSerie.print(h);
  BTSerie.write("*");
  delay(100);


  //Humidité du sol
  BTSerie.write("*B");
  BTSerie.print(secheresse);
  BTSerie.write("*");
  delay(100);

  //Luminosité 
  BTSerie.write('*L');
  BTSerie.print(value);
  BTSerie.write('*');
  delay(100);

  //PH du sol
  BTSerie.write('*P');
  BTSerie.print(tensPH);
  BTSerie.write('*');
  delay(100);

}
