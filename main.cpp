#include <iostream>
#include <string>
#include "Tour.h"

using namespace std;


int main()
{
    int choix ,mouv;
    Tour T;
    T.initialier();

    do
    {
        cout << "****menu" << endl;
        cout << "1-Effectuer un mouvement" << endl;
        cout << "2-Afficher Tour" << endl;
        cout << "3-Help" << endl;
        cout << "0-Quitter" << endl;
        cout << "veuillez entrez un choix " << endl;
        cin>>choix ;

        switch(choix)
        {
        case 1 :
            try
                 {
                    cout << "Veuillez entrer le mouvement" << endl;
                    cin>>mouv;
                    T.siasirMouvement(mouv);
                 }
            catch(std::exception const& e)
                 {
                     cerr << "ERREUR : " << e.what() << endl;
                }

            break;

        case 2 :
            cout<< "-----Tour--Hanoi-----" <<endl;
            T.afficher();
            cout<< "-----Tour--Hanoi-----" <<endl;
            break;

        case 3 :

            cout << "Les tours de Hanoi sont un jeu de reflexion imagine par le mathematicien francais Edouard Lucaset consistant a deplacer des disques de diametres differents d'une tour de  -depart-  a une tour -d'arrivee - en passant par une tour - intermediaire -, et ceci en un minimum de coups, tout enrespectant les regles suivantes : "<<endl;
            cout<< "-----------regles------------" <<endl;
            cout<< "1-on ne peut deplacer plus d'un disque a la fois "<<endl;
            cout<< "2-on ne peut placer un disque que sur un autre disque plus grand que lui ou sur uemplacement vide" << endl;
            cout<< "-----------details input------------" <<endl;
            cout<< " lorsque  l utilisateur ecrit 12, il s agit d unecommande permettant de deplacer un disque du 1er au 2eme tour" <<endl;
            cout<< " lorsque l utilisateur ecrit 31, il s agit d unecommande permettant de deplacer un disque du 3e au 1er tour" <<endl;
            cout<< "et ainsi de suite"<<endl;
            break;
        }

    }while(choix!=0);

    return 0;
}
