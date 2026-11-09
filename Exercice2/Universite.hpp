
#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP

#include <string>

class Universite {
private:
    // Nom de l'universite
    std::string nom;

public:
    // Constructeur
    explicit Universite(const std::string& n);

    // Affiche le nom de l'universite
    void afficherNom() const;
};

#endif
