#include "Etudiant.hpp"
#include "Universite.hpp"

#include <iostream>
#include <stdexcept>

// Initialisation de l'attribut statique
int Etudiant::nbEtudiants = 0;

// Constructeur
Etudiant::Etudiant(const std::string& n, int a, Universite* u)
    : nom(n), age(a), universite(u) {

    // Verification des informations
    if (age <= 0) {
        throw std::invalid_argument("Age invalide.");
    }

    if (universite == nullptr) {
        throw std::invalid_argument("Universite invalide.");
    }

    // Augmentation du compteur
    nbEtudiants++;
}

// Affiche les informations de l'etudiant
void Etudiant::afficher() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Age : " << age << std::endl;

    std::cout << "Universite : ";
    universite->afficherNom();

    std::cout << "------------------------" << std::endl;
}

// Methode statique
void Etudiant::afficherTotal() {
    std::cout << "Nombre total d'etudiants crees : "
              << nbEtudiants << std::endl;
}
