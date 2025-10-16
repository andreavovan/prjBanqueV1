/**
  @file main.cpp
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */

#include <iostream>
#include "menu.h"
#include "comptebancaire.h"

using namespace std;

int main()
{
    Menu m("CompteBancaire.txt");
    double montant ;
    CompteBancaire c;
    int reponse;
    reponse = m.AfficherEtRecupererReponse();
    switch(reponse)
    {
    case 1:  // Consultation du solde
        cout<<"Solde : "<<c.ConsulterSolde() << endl;
        break;
    case 2: // depot
        cout << "Combien voulez vous deposer ?";
        cin>>montant;
        c.Deposer(montant);
        break;
    case 3: // retrait
        cout<<"Combien voulez vous retirer ?";
        cin>>montant ;
        if (!c.Retirer(montant))
        {
            cout << "Retrait impossible! "<< endl ;
        }
    }

    return 0;
}
