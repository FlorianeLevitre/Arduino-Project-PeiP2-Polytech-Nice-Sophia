# Arduino-Project-PeiP2-Polytech-Nice-Sophia-
Levitre Floriane et Alagia Mélanie

Séance du 22/12/17

Pour commencer, nous voulions faire un projet en rapport avec la nature, c'est-à-dire soit concernant les animaux soit les plantes. Nous avons décidé de nous orienter vers les plantes, en vue d'une possible utilité lors de notre cycle ingénieur si l'on se spécialise en génie de l'eau ou en agroalimentaire. Les plantes sont des êtres vivants nécessitant de l'eau, des sels minéraux, de l'air, de la lumière (directe ou indirecte) et de la chaleur. Ainsi, nous avons décidé de créer une malette comportant quatre capteurs permettant de mesurer les différents besoins d'une plante. 

Nous avons fait des recherches concernant les capteurs pouvant déjà exister, et nous avons trouvé des tutoriels principalement sur le capteur d'humidité du sol permettant de savoir si la plante a plus ou moins besoin d'eau. Ses tutoriels existants nous donnent des informations sur le cablage de ce capteur ainsi que sur le code l'accompagnant. 

Séance du 12/01/18

Nous avons décidé de séparer les taches de travail. J'ai décidé de continuer la rédaction du README et Mélanie fait des recherches plus approfondies concernant les capteurs. 
Premièrement, nous choisissons de partir sur le montage du capteur d'humidité, et sur la rédaction du code.

13/01/18

Floriane a fait une expérience permettant de déterminer la résistance interne du capteur d'humidité. Le montage permettant de réaliser cette expérience est simple : une résistance de 2 MOhm (cette ordre de grandeur été déterminé approximativement) en série avec le capteur humidité. 
Ainsi, lorsque le capteur se trouve dans une plante non arrosée, le seuil en tension à partir duquel le sol est considéré comme sec est le suivant : 4.40V. Dans notre code, on obtient un nombre compris entre 0 et 1023. On fait un produit en croix pour déterminer la tension en volts, soit (900*5)/1023=4.40V. Cette tension correspond à une résistance interne variant de 15.0 MOhm à 46,7 MOhm environ.
Pour une plante arrosé, le seuil en tension à partir duquel le sol est considéré comme humide est : 3.44V. De même, cette valeur a été trouvé par un produit en croix : (704*5)/1023=3.44V. Ainsi, cette tension correspond à une résistance interne variant de 4.60 MOhm à 13.4 MOhm.

Séance du 18/01/18


