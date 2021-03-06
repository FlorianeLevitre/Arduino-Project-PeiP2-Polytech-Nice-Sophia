<h1>RAPPORT</h1>

<h2>Séance du 22/12/17</h2>

Voici une liste des tâches effectuées lors de cette séance de "découverte" : 
<ul>
<li>Discution du projet avec Mr Masson permettant de déterminer sa faisabilité</li>
<li>Recherche des différents capteurs déjà existants en rapport avec les besoins d'une plante</li>
<li>Recherche de tutoriels sur l'utilisation des capteurs avec la carte Arduino</li>
<li>Création du GitHub</li>
</ul>

<h2>Séance du 12/01/18</h2>
Lors de cette deuxième séance, Mr Masson nous a fourni trois capteurs qu'il possédait déjà : 
<ul>
<li>Capteur d'humidité du sol</li>
<li>Capteur de luminosité</li>
<li>Capteur de température et d'humidité de l'air</li>
</ul>

Nous avons décidé de nous séparer les tâches. Mélanie est partie sur le capteur de température et d'humidité de l'air, et moi sur le capteur d'humidité du sol. 
J'ai réalisé une première expérience permettant de me donner une petite idée de ce qu'il fallait faire pour déterminer le seuil à partir duquel la terre est considérée comme sèche ou humide. Ce seuil correspond à une tension et une valeur de résistance lues par la carte Arduino.
Je n'avais à ma disposition que de la terre humide récupérée dans un pot, c'est pour cela que cette expérience était juste un "entrainement".

En faisant rapidement un branchement du capteur humidité sur un ohmètre, je me suis vite rendue compte que les valeurs de cette résistance dépassaient largement la capacité d'affichage de ce dernier. Il m'était donc impossible par ce moyen de déterminer un quelconque seuil de "sécheresse".
Avec mon échantillon de terre humide, j'ai suivi les étapes suivantes:  
<ol>
<li>Fabrication du montage nécessitant :</li>
<ul>
<li>Une résistance de 2 MOhm en série avec le capteur humidité du sol sur la breadboard.</li>
<li>Une connection de la breadboard avec la carte Arduino à l'aide d'un cable USB</li>
</ul>
<li>Ecriture du code</li>
<li>Exécution de l'expérience pour de la terre humide</li>
</ol>

<h2>Travail du 13/01/18</h2>

Chez moi, j'ai pu prendre deux plantes en pot, l'une avec de la terre sèche et l'une avec de la terre humide, permettant ainsi de terminer ma première expérience. 
J'ai donc relevé les valeurs de tension et de résistance dans les deux cas. 
De plus, Mélanie et moi avons passé notre première commande : un analyseur de sol 3-en-1.
Après avoir fait des recherches, nous nous sommes rendues compte qu'il n'existait pas de capteur de pH "seul". Nous avons pris la décision de commander ce capteur 3-en-1 afin de le démonter et analyser ce qu'il y a à l'intérieur pour pouvoir le réutiliser avec Arduino.

<h2>Séance du 18/01/18</h2>

J'ai fait des recherches sur un capteur d'humidité plus grand que celui qu'il nous a été fourni. En effet, le premier capteur mis à notre disposition mesure seulement 0.6mm, et mesurer l'humidité du sol seulement à mois d'un cm de la surface n'est pas significatif. Avec le soleil et le vent, cette première couche de terre sèche très vite, alors que plus en profondeur, la plante est toujours humide.
J'ai perfectionné l'écriture du README, et commencé à écrire mon rapport personnel.

<h2>Séance du 23/01/18</h2>

Nous avons fait notre 1er oral dans le but de présenter notre projet à nos professeurs et à notre groupe. 

Mr Masson nous a donné le capteur de pH du sol et le capteur d'humidité du sol qu'il a recu. 
Nous avons essayé d'ouvrir le capteur pH du sol, mais ce fut un échec. Nous demanderons donc la prochaine fois qu'une personne ayant plus de force le fasse...
J'ai écris le code du capteur humidité, fait le montage et testé à l'air ambiant ainsi que dans un bol d'eau. 
La prochaine expérience consiste à tester ce capteur dans de la terre sèche et dela terre humide. 

<h2>Séance du 07/02/18</h2>

Nous avons réussi à ouvrir notre capteur pH (avec l'aide de Mr Masson...). Il nous reste cependant à analyser les composants se trouvant à l'intérieur et leurs utilités lors de la prochaine séance, sachant que nous ne trouvons aucune information sur internet permettant de nous aider à mieux comprendre ce capteur. Nous essaierons donc au maximum de déchiffrer ce que nous voyons. 
Nous avons décidé d'utiliser le bluetooth comme moyen de communication entre notre carte Arduino et notre téléphone. Nous avons téléchargé l'application Bluetooth Electronics afin de déterminer si nous choisirons cette application ou non.  
Nous avons fait le branchement du module bluetooth HC-06 sur notre breadboard à l'aide des cours de Mr Ferrero. Cependant nous n'avons pas réussi à le configurer correctement, nous terminerons donc cela lors de la séance prochaine. 
Nous avons également cherché sur internet un logiciel qui nous permettrait de créer un boitier extérieur permettant de dissimuler au mieux tout notre montage et de donner un aspect esthétique joli. Nous avons pour le moment téléchargé le logiciel LibreCad mais ce n'est pas encore sur que nous utilisions celui-ci. 

<h2>Séance du 16/03/18</h2>

J'ai terminé la configuration du module HC-06. 
J'attends la séance prochaine avec Mélanie pour pouvoir discuter ensemble de la configuration de l'application Bluetooth Electronics. Il s'agit plutôt en fait de réfléchir ensemble à la présentation de nos mesures par la carte Arduino sur l'application. 
Je me suis également occupée du capteur pH. Pour rappel, il mesure également la luminosité et l'humidité du sol.
Afin de déterminer son mode d'alimentation, j'ai utilisé un Voltmètre et j'ai mesuré la tension en sortie du capteur en fonction de la luminosité. Lorsque le capteur est à l'ombre, la tension est quasi nulle. Au soleil, elle est de l'ordre de 0,140V. 
Afin de déterminer quels fils correspondent à la mesure du pH, j'utilise un Ohmètre que je mets en mode "détecteur de tension continue". Lorsque deux fils sont connectés, l'ohmètre va alors émettre un bruit. Une fois que j'ai trouvé quels fils étaient connectés, il ne me reste plus qu'à les désouder du boitier afin de les connecter avec ma carte Arduino. Il faut cependant que je trouve une scie à métaux me permettant de séparer le capteur pH du reste du boitier. Dès que j'aurai fait cette étape, je pourrais connecter mon capteur à ma carte Arduino et ainsi créer un programme permettant de mesurer le pH du sol. 

<h2>Séance du 29/03/18</h2>

Mélanie et moi avons fait un schéma de ce à quoi ressemblera si possible notre boitier final comportant nos 4 capteurs ainsi que notre carte Arduino. Nous avons noté également toutes les dimensions nécessaires. 
Nous avons discuté avec Mr Masson et nous avons fait le choix de souder tous nos fils entre eux afin de ne pas intégrer de breaboard à notre boitier, cela nous fera gagner de la place. 
Nous avons pris rendez-vous pour le 03/04/18 au FabLab afin d'imprimer au laser notre boitier dans du plexiglas. 
Nous avons ensuite commencé notre diaporama pour notre 2ème oral qui aura lieu le 05/04/18. 

<h2>Mardi 03 et Mercredi 04/05/18</h2>

Nous sommes allées au FabLab pour imprimer au Laser notre boitier qui comportera tout notre circuit. Nous avons changé le plexiglas pour du bois pour une question d'esthétique. Le bois fait nature, et on ne verra pas le circuit interne. Nous laisserons bien évidemment une face non collée permettant d'observer l'intérieur. 
Nous avons percé des trous pour tous nos capteurs ainsi que pour les LED associées. 
Nous avons fixé notre carte Arduino sur la face inférieure de notre boite à l'aide de vis. Il nous reste à vernir le boitier pour l'imperméabiliser un minimum et souder le circuit à l'intérieur.

<h2>Séance du 05/04/18</h2>

Nous avons présenté lors de notre 2ème oral l'avancement de notre projet depuis qu'on l'a commencé. Nous avons parlé de nos objectifs, de nos réussites, des difficultés rencontrées et de notre planning. 
Nous avions auparavant cablé le module HC-06 sur la breadboard et il fonctionnait. Cependant, lorsque nous l'avons soudé aujourd'hui, il ne fonctionne plus. Nous règlerons notre erreur de soudage la semaine prochaine. 

<h2>Séance du 09/04/18</h2>
Mélanie et moi avons passé la séance à souder tous nos capteurs (excepté le pH, dont nous n'avons pas encore compris le fonctionnement : code et montage). Nous avons également essayé de rentrer nos capteurs humidité du sol, luminosité, température et humidité de l'air à l'intérieur de la boite et cela rentre !

<h2> Séance du 09/05/18</h2>
Suite aux conseils de Mr Masson, j'ai écrit un très court programme permettant de relever la tension du capteur pH. Nous avons testé notre programme en plongeant notre capteur dans de l'eau (pH neutre). Il nous faut désormais plonger notre capteur dans une solution basique et une solution acide et ainsi dire par exemple qu'une telle tension correspond à un tel pH. Sans informations sur internet, il nous est impossible de comprendre le fonctionnement exact de ce capteur. 
Nous avons regroupé tous nos codes qui étaient jusque là écrits dans des fichiers séparés. Nous avons également crée un panel sur l'application BLuetooth Electronics permettant d'afficher la température et l'humidité de l'air. Il nous reste à rassembler toutes les informations des capteurs sur un même panel pour pouvoir ainsi visualiser toutes nos données récupérées en même temps. 
J'ai également modifié notre README. 

<h2> 07/05/18 et 08/05/18 </h2>
J'ai complété le panel sur l'application en y rajoutant deux gauges, une pour le capteur humidité du sol et une pour la luminosité. Les données relevées par la carte Arduino sont bien envoyés sur ce panel et les LED s'allument lorsque cela est nécessaire. Comme nous n'avons pas encore incorporé le capteur pH du sol à notre circuit, il n'est donc pas codé dans notre fichier final et n'apparaît pas sur le panel. 
J'ai également collé toutes les faces de la boite (excepté deux, afin que l'on accède toujours facilement au circuit pour le moment). Les LED sont mises en place hors de la boite dans les trous crées pour cela. 
Il va falloir que j'aille acheter une plante de terre de bruyère qui se cultive en sol acide. Nous pourrons donc lui associer une tension. En ce qui concerne le sol basique, il faudra prendre une plante dans du terreau. 

<h2> Séance du 09/05/18 </h2>
Mélanie et moi sommes parties au début de la séance chez Castorama côté jardin. Nous y avons acheté de l'hortensia bleu qui se cultive en sol très acide (pH 4 à 5,5) et de la menthe qui se cultive en sol très calcaire (basique) (pH 7 à 8). De retour en cours, nous avons ensuite testé le capteur pH séparemment du circuit. Nous avons plongé la tige argentée dans chacune des deux plantes, et nous avons trouvé qu'une tension inférieure à 60V correspondait à un pH acide et une tension supérieure à un pH basique. 
Nous avons ensuite soudé le capteur pH et une LED témoin au reste du circuit. Sur l'application Bluetooth Electronics, nous avons terminé notre panel avec nos quatre gauges.

<h2> 12/05/18 et 13/05/18</h2>
J'ai collé le capteur pH ainsi que sa LED témoin dans les trous associés. J'ai également collé les 5 côtés de la boite, et laissé un côté latéral pouvant être ouvert en cas de besoin (il est uniquement fixé avec de la pate à fixe). J'ai retesté notre circuit et tout fonctionne parfaitement, excepté peut-être que le capteur pH est un peu trop long par rapport au capteur humidité et qu'il sera difficile de trouver un pot suffisamment long permettant de tester les deux capteurs en même temps. 
Il ne nous reste plus désormais qu'à peaufiner notre fichier, rédiger le rapport final et passer à l'oral !!!

<h2>26-27/05/18</h2>
Nous avons terminé de rédiger le rapport final 

<h2>31/05/18</h2>
Nous avons filmé notre vidéo démonstration afin de réunir toutes les conditions nécéssaires pour montrer le fonctionnement de notre projet : avec/sans lumière, terre sèche/humide, températures froides/chaudes et pH qui ne marche pas...

<h2>01/06/18</h2>
Jour J !!! Nous allons faire notre oral final pour présenter notre projet devant nos responsables 
