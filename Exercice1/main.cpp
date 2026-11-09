
#include <iostream>
#include "Livre.hpp"

int main() {
    std::cout << "===== BIBLIOTHEQUE =====" << std::endl;

    // Creation de trois livres
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupery", 1943);
    Livre l3("L'Etranger", "Albert Camus", 1942);

    // Affichage des informations
    l1.afficher();
    l2.afficher();
    l3.afficher();

    // Appel de la methode statique sans instancier un objet
    std::cout << "\n===== TOTAL DES LIVRES =====" << std::endl;

    Livre::afficherTotal();

    return 0;
}
