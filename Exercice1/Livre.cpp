
#include "Livre.hpp"
#include <iostream>

// Initialisation de l'attribut statique
int Livre::nbLivres = 0;

// Constructeur
// Chaque nouveau livre augmente le compteur.
Livre::Livre(const std::string& t, const std::string& a, int an)
    : titre(t), auteur(a), annee(an) {

    nbLivres++;
}

// Affiche les informations du livre
void Livre::afficher() const {
    std::cout << "Titre : " << titre << std::endl;
    std::cout << "Auteur : " << auteur << std::endl;
    std::cout << "Annee : " << annee << std::endl;
    std::cout << "------------------------" << std::endl;
}

// Methode statique
// Elle peut acceder directement a l'attribut statique.
void Livre::afficherTotal() {
    std::cout << "Nombre total de livres crees : "
              << nbLivres << std::endl;
}
