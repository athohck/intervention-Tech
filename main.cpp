#include <iostream>
#include <string>
#include <fstream>

std::string ajoutNote() {
    std::string noteIntervention;
    std::cout << "Entre tes notes : ";
    std::getline(std::cin, noteIntervention);
    return noteIntervention;
}

int main() {
    char note;
    std::string nomIntervention;
    
    std::cout << "Entrer le nom de ton intervention : " << std::endl;
    std::getline(std::cin, nomIntervention);
    
    // Ouvre le fichier UNE SEULE FOIS
    std::ofstream interTech(/*Ajoute ton path ici Moi ici javais mis mon path avec interTech.txt*/);//Creation du ofstream afin de le sauvarger dans un fichier
    
    if (interTech.is_open()) {
        interTech << "Intervention sur : " << nomIntervention << "\n";
        
        std::cout << "Ajout note ? (o/n) : ";
        std::cin >> note;
        std::cin.ignore();  // ← Important après cin >> note
        
        if (note == 'o') {
            std::string notes = ajoutNote();  // ← Récupère le retour
            interTech << "Notes : " << notes << "\n";
        }
        else if (note == 'n') {
            interTech << "Aucun commentaire\n";
        }
        else {
            std::cout << "Aucun choix ne correspond\n";
        }
        
        interTech.close();  // Ferme une seule fois à la fin
    }
    
    return 0;
}