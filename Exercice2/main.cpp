
#include <iostream>

#include "Universite.hpp"
#include "Etudiant.hpp"

int main() {
    std::cout << "===== UNIVERSITE =====" << std::endl;

    // Creation d'une universite
    Universite u("Universite de Casablanca");

    // Creation de plusieurs etudiants
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    // Affichage des informations
    std::cout << "\n===== INFORMATIONS DES ETUDIANTS ====="
              << std::endl;

    e1.afficher();
    e2.afficher();

    // Appel de la methode statique sans creer un objet
    std::cout << "\n===== TOTAL DES ETUDIANTS ====="
              << std::endl;

    Etudiant::afficherTotal();

    return 0;
}
