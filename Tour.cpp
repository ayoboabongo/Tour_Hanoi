#include <iterator>
#include <vector>
#include "exception"
#include <string>
#include <iostream>
#include "Disque.h"
#include "Tour.h"

using namespace std;

void Tour::initialier()
    {
        Disque D1(1),D2(2),D3(3);
        Tige1.push_back(D3);
        Tige1.push_back(D2);
        Tige1.push_back(D1);
    }

void Tour::afficher()
    {
        unsigned int i;
        if(Tige1.empty())
        {
            cout<< "Tower 1 :Empty" <<endl;
        }
        else
        {
            cout<< "Tower 1 :" ;
            for(i=0;i<Tige1.size();i++)
            {
                Tige1[i].afficherDisque();
            }
        }
        cout <<""<<endl;

        if(Tige2.empty())
        {
            cout<< "Tower 2 :Empty" <<endl;
        }
        else
        {
            cout<< "Tower 2 :" ;
            for(i=0;i<Tige2.size();i++)
            {
                Tige2[i].afficherDisque();
            }
            cout <<""<<endl;
        }
         //cout <<""<<endl;

        if(Tige3.empty())
        {
            cout<< "Tower 3 :Empty" <<endl;
        }
        else
        {
            cout<< "Tower 3 :" ;
            for(i=0;i<Tige3.size();i++)
            {
                Tige3[i].afficherDisque();
            }
        }
         cout <<""<<endl;
    }


void Tour::siasirMouvement(int mouv)
    {


        if((mouv==13)||(mouv==12)||(mouv==32)||(mouv==31)||(mouv==21)||(mouv==23))
        {
            switch(mouv)
            {
            case 13 :

                if(Tige1.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
               else
               {

                       if(Tige3.empty()||((Tige1[Tige1.size()-1].getDiametre())<(Tige3[Tige3.size()-1].getDiametre())))
                       {
                         Disque D(Tige1[Tige1.size()-1].getDiametre());
                         Tige3.push_back(D);
                         Tige1.pop_back();
                         cout<< "mouvement effectue" <<endl;
                       }
                       else{

                            throw Erreur_disque("Disque Source beaucoup plus grand ","Disque");

                       }



              }

                break ;

            case 12 :

                if(Tige1.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
               else
               {

                       if(Tige2.empty()||((Tige1[Tige1.size()-1].getDiametre())<(Tige2[Tige2.size()-1].getDiametre())))
                       {
                         Disque D(Tige1[Tige1.size()-1].getDiametre());
                         Tige2.push_back(D);
                         Tige1.pop_back();
                         cout<< "mouvement effectue" <<endl;
                       }
                       else{

                            throw Erreur_disque("Disque Source beaucoup plus grand ","Disque");

                       }



              }
                break;

            case 32 :
                 if(Tige3.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
               else
               {

                       if(Tige2.empty()||((Tige3[Tige3.size()-1].getDiametre())<(Tige2[Tige2.size()-1].getDiametre())))
                       {
                         Disque D(Tige3[Tige3.size()-1].getDiametre());
                         Tige2.push_back(D);
                         Tige3.pop_back();
                         cout<< "mouvement effectue" <<endl;
                       }
                       else{

                            throw Erreur_disque("Disque Source beaucoup plus grand ","Disque");

                       }



              }
                break;

            case 31 :
                if(Tige3.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
               else
               {

                       if(Tige1.empty()||((Tige3[Tige3.size()-1].getDiametre())<(Tige1[Tige1.size()-1].getDiametre())))
                       {
                         Disque D(Tige3[Tige3.size()-1].getDiametre());
                         Tige1.push_back(D);
                         Tige3.pop_back();
                         cout<< "mouvement effectue" <<endl;
                       }
                       else{

                            throw Erreur_disque("Disque Source beaucoup plus grand ","Disque");

                       }



              }
                break;

            case 21 :
                if(Tige2.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
               else
               {

                       if(Tige1.empty()||((Tige2[Tige2.size()-1].getDiametre())<(Tige1[Tige1.size()-1].getDiametre())))
                       {
                         Disque D(Tige2[Tige2.size()-1].getDiametre());
                         Tige1.push_back(D);
                         Tige2.pop_back();
                         cout<< "mouvement effectue" <<endl;
                       }
                       else{

                            throw Erreur_disque("Disque Source beaucoup plus grand ","Disque");

                       }



              }
                break;

            case 23 :

                if(Tige2.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
               else
               {

                       if(Tige3.empty()||((Tige2[Tige2.size()-1].getDiametre())<(Tige3[Tige3.size()-1].getDiametre())))
                       {
                         Disque D(Tige2[Tige2.size()-1].getDiametre());
                         Tige3.push_back(D);
                         Tige2.pop_back();
                         cout<< "mouvement effectue" <<endl;
                       }
                       else{

                            throw Erreur_disque("Disque Source beaucoup plus grand ","Disque");

                       }



              }
                break;
            }


        }

        else
            if((mouv==11)||(mouv==22)||(mouv==33))
        {
            switch(mouv)
            {
            case 11 :
                if(Tige1.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
                else
                {
                    cout<< "mouvement vide" <<endl;
                }
                break;

            case 22 :
                if(Tige2.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
                else
                {
                    cout<< "mouvement vide" <<endl;
                }
                break;

            case 33 :
                if(Tige3.empty())
                {
                    throw  Erreur_tigeSource("Tige source vide ","tige");
                }
                else
                {
                    cout<< "mouvement vide" <<endl;
                }
                break;
            }

        }

        else
        {
            throw Erreur_tour("mouvement non valide","tige");
        }

    };

