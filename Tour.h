#ifndef TOUR_H_INCLUDED
#define TOUR_H_INCLUDED

#include <iterator>
#include <vector>
#include "exception"
#include <string>
#include "Disque.h"


using namespace std;


class exception
{
public:
exception() throw(){ } //Constructeur.
virtual ~exception() throw(); //Destructeur.
virtual const char* what() const throw(); //Renvoie une chaîne

};

class Erreur_tour : public std::exception
{
private :
    string m_phrase ;
    string m_niveau ;

public :
    Erreur_tour(string phrase="",string niveau="")
    throw():m_phrase(phrase),m_niveau(niveau)
     {
     }
     virtual const char* what() const throw()
     {
       return m_phrase.c_str();
     }
     string getNiveau() const throw()
      {
         return m_niveau;
      }
    virtual ~Erreur_tour() throw()
     {

     }


};

class Erreur_disque : public std::exception
{
    private :
    string m_phrase ;
    string m_niveau ;

public :
    Erreur_disque(string phrase="",string niveau="")
    throw():m_phrase(phrase),m_niveau(niveau)
     {
     }
     virtual const char* what() const throw()
     {
       return m_phrase.c_str();
     }
     string getNiveau() const throw()
      {
         return m_niveau;
      }
    virtual ~Erreur_disque() throw()
     {

     }

};

class Erreur_tigeSource : public std::exception
{
    private :
    string m_phrase ;
    string m_niveau ;

public :
    Erreur_tigeSource(string phrase="",string niveau="")
    throw():m_phrase(phrase),m_niveau(niveau)
     {
     }
     virtual const char* what() const throw()
     {
       return m_phrase.c_str();
     }
     string getNiveau() const throw()
      {
         return m_niveau;
      }
    virtual ~Erreur_tigeSource() throw()
     {

     }

};


class Tour
{
private :
    vector<Disque> Tige1;
    vector<Disque> Tige2;
    vector<Disque> Tige3;
    //int mouv;
public :
    void initialier();

    void siasirMouvement(int mouv);

    void afficher();

};

#endif // TOUR_H_INCLUDED
