# Carnet d'Interventions Techniques

## Description
Application de prise de notes pour techniciens de maintenance permettant d'enregistrer et documenter les interventions techniques dans un fichier texte.

## Fonctionnalités
- ✅ Enregistrement du nom de l'intervention
- ✅ Ajout optionnel de notes détaillées
- ✅ Sauvegarde automatique dans un fichier texte
- ✅ Ajout en mode append (conserve l'historique)

## Technologies
- C++
- Gestion de fichiers (fstream)
- Fonctions

## Utilisation
```bash
g++ main.cpp -o intervention
./intervention
```

## Déroulement
1. Entrer le nom de l'intervention
2. Choisir d'ajouter des notes (o/n)
3. Si oui : saisir les notes détaillées
4. Sauvegarde automatique dans `intervention.txt`

## Structure du fichier de sortie
```
Intervention sur : [Nom de l'intervention]
Notes : [Notes détaillées si ajoutées]
ou
Aucun commentaire
```

## Cas d'usage
Idéal pour :
- Techniciens de maintenance (McDonald's, industrie, etc.)
- Suivi des réparations effectuées
- Historique des interventions
- Documentation technique quotidienne

## Auteur
athohck - Décembre 2024

