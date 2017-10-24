# Intelligence-artificiel-simple
Intelligence artificielle simple qui doit trouver la sortie d'un labyrinthe importé depuis un fichier avec des points de vie initiaux et des ressources

## Règles du jeu
* Survivre.
* Faire atteindre la sortie au personnage.

## Contraintes
* Le personnage commence avec un certain nombre de points de vie.
* Le personnage meurt si ses pv tombent a zéro.
* Le personnage ne peut se déplacer que d'une case.
* Le personnage ne peut se déplacer que verticalement ou horizontalement.
* Le personnage ne peut bien évidemment pas sortir de la carte :)
* Chaque déplacement coute un point de vie.
* Toutes les ressources régénèrent le même montant de pv.

## Détails
Carte de N*M (strictement positifs) contenue dans un fichier qui sera passé en argument à votre programme.

## Légende
@ -> position initiale

\+  -> ressource

\#  -> sortie

### Exemples
```
root# cat map1.txt
@
  +
 + #
root# cat map2.txt
    +
            @
+         +
              +

+
   #

        +
root#
```
Les points de vie initiaux et la valeur des ressources seront donnés en argument en plus du fichier contenant la carte (dans cet ordre).

Le programme affichera sur la sortie standard "OK" si le personnage peut atteindre la sortie ou "KO" dans tout autre cas.

### Exemples
```
root# cat map72.txt
@ +    #
root# ./algo 10 1 map72.txt
OK
root# ./algo 2 1 map72.txt
KO
root# ./algo 2 2 map72.txt
KO
root# ./algo 2 10 map72.txt
OK
root# cat map18.txt
    +    @
```
