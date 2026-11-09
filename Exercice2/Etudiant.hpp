
#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Universite;

class Etudiant {
private:
    // Informations propres a chaque etudiant
    std::string nom;
    int age;

    // Pointeur vers l'universite associee
    Universite* universite;

    // Compteur partage entre tous les etudiants
    static int nbEtudiants;

public:
    // Constructeur
    Etudiant(const std::string& n, int a, Universite* u);

    // Affiche les informations de l'etudiant
    void afficher() const;

    // Affiche le nombre total d'etudiants crees
    static void afficherTotal();
};

#endif
