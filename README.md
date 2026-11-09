# Exercice 1 : Suivi des Livres dans une Bibliothèque

Figure 1 : Résultat de l'exécution de l'exercice 1
<img width="1920" height="691" alt="Screenshot (1253)" src="https://github.com/user-attachments/assets/3d680f3d-2cec-4690-9852-1805f1f8c276" />

Dans cet exercice, nous avons créé une classe Livre contenant trois attributs privés : le titre, l'auteur et l'année de publication. 
Nous avons utilisé un constructeur pour initialiser ces attributs lors de la création des objets.
Un attribut statique nbLivres permet de compter le nombre total de livres créés, grâce à son incrémentation dans le constructeur. 
Nous avons également implémenté deux méthodes : afficher() pour présenter les informations d'un livre et afficherTotal() pour afficher le compteur.
Dans main.cpp, nous avons créé trois livres et affiché leurs informations. Le résultat obtenu confirme le bon fonctionnement du programme avec un total de 3 livres créés.

# Exercice 2 : Gestion des Étudiants et de l’Université

Figure 2 : Résultat de l'exécution de l'exercice 2
<img width="1920" height="645" alt="Screenshot (1254)" src="https://github.com/user-attachments/assets/78301ff3-1b86-47cf-9986-ab6608f077c0" />

Dans cet exercice, nous avons créé deux classes : Universite et Etudiant, afin de mettre en pratique l'association entre objets.
La classe Universite contient le nom de l'université, tandis que la classe Etudiant possède un nom, un âge et un pointeur Universite*.
Ce pointeur permet d'associer plusieurs étudiants à une même université.
Nous avons utilisé un constructeur pour initialiser les attributs et vérifier la validité de l'âge et du pointeur.
Un attribut statique nbEtudiants permet de compter les étudiants créés. Les méthodes afficher() et afficherTotal() permettent respectivement d'afficher les informations et le nombre total d'étudiants.
Dans main.cpp, nous avons créé une université et deux étudiants associés à celle-ci. 
Le résultat obtenu affiche correctement leurs informations et un total de 2 étudiants.
