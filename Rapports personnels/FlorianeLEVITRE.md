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
<li>Exécution de l'expérience pour de la terre humide<li>
</ol>

<h2>Travail du 13/01/18</h2>

Chez moi, j'ai pu prendre deux plantes en pot, l'une avec de la terre sèche et l'une avec de la terre humide, permettant ainsi de terminer ma première expérience. 
J'ai donc relevé les valeurs de tension et de résistance dans les deux cas. 
De plus, Mélanie et moi avons passé notre première commande : un analyseur de sol 3-en-1.
Après avoir fait des recherches, nous nous sommes rendues compte qu'il n'existait pas de capteur de pH "seul". Nous avons pris la décision de commander ce capteur 3-en-1 afin de le démonter et analyser ce qu'il y a à l'intérieur pour pouvoir le réutiliser avec Arduino.


<h2>Séance du 18/01/18</h2>

J'ai fait des recherches sur un capteur d'humidité plus grand que celui qu'il nous a été fourni. En effet, le premier capteur mis à notre disposition mesure seulement 0.6mm, et mesurer l'humidité du sol seulement à mois d'un cm de la surface n'est pas significatif. Avec le soleil et le vent, cette première couche de terre sèche très vite, alors que plus en profondeur, la plante est toujours humide.
J'ai perfectionné l'écriture du README, et commencé à écrire mon rapport personnel.



