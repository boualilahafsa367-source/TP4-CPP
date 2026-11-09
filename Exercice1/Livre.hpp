
#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>

class Livre {
private:
    // Informations propres a chaque livre
    std::string titre;
    std::string auteur;
    int annee;

    // Compteur partage par tous les objets Livre
    static int nbLivres;

public:
    // Constructeur
    Livre(const std::string& t, const std::string& a, int an);

    // Affiche les informations d'un livre
    void afficher() const;

    // Affiche le nombre total de livres crees
    static void afficherTotal();
};

#endif
