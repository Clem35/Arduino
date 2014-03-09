Première Application Xbee
=======

Dans cette première application nous allons envoyer périodiquement une chaine de caractères depuis un module Xbee afin de le recevoir sur le deuxième module Xbee et de l'afficher sur le terminal.

Matériel :
- 2 cartes Arduino UNO
- 2 XBee Shield
- 2 modules XBee 
- logiciel X-CTU 
- logiciel arduino

### Première Etape - Configuration des modules XBee

Cette partie va consister à configurer les deux modules XBee afin qu'ils puissent par la suite communiquer. 
Cette configuration s'effectue sous X-CTU.

1. Vérification 

  Pour réaliser cette étape il faut que les jumpers des XBee Shield soient en position USB comme ci dessous :

 ![XBee Shield](../Images/Xbee_shield.png)
 
2. Connection de l'arduino sur l'ordinateur.

  Afin de pouvoir configurer le module XBee il faut premièrement connaître sur quel port (USB) l'arduino est branché. Pour cela il faut se rendre dans le `Gestionnaire de Périphériques` sous Windows. Puis dans la partie `Ports (COM et LTP)` nous retrouvons le module arduino avec le port correspondant. Sur l'image ci-contre nous pouvons voir que l'arduino est connecté au port `COM14`.
  
 ![Gestionnaire de Périphériques](../Images/gestionnaire_peripherique.png)
  
3. Première connection avec X-CTU.
  
   Dans l'onglet `PC Settings` cliquer sur `User Com Ports` puis dans la partie `Add User Com Port` il faut entrer le port COM sur lequel l'arduino est connecté, dans notre cas le port `COM14`. Pour valider nous devons cliquer sur le bouton `Add`.

2. Test de la communication.

  Dans l'onglet `PC Settings` sélectionner le port COM sur lequel on souhaite faire le test dans la liste `Select Com Port`puis cliquer sur `TEST/QUERY`. Si X-CTU n'arrive pas à se connecter aux modules XBee alors il faut soit 
faire un pont entre la borne `RESET` et la borne `GND` de l'arduino UNO soit renvoyer une application de base comme `Blink` par exemple dans l'arduino.

3. Réglage des modules XBee.

  Dans l'onglet `Modem Configuration` 


  
### Deuxième Etape - Ecriture du code et envoi du code sur l'Arduino

### Dernière Etape - Mise en Marche de l'application

