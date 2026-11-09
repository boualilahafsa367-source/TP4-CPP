
#include "Universite.hpp"
#include <iostream>

// Constructeur
Universite::Universite(const std::string& n)
    : nom(n) {
}

// Affiche le nom de l'universite
void Universite::afficherNom() const {
    std::cout << nom << std::endl;
}
