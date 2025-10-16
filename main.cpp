/**
  @file main.cpp
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */

#include <iostream>
#include "menu.h"
//#include "comptebancaire.h"
#include "compteepargne.h"

using namespace std;

int main()
{
    /* Menu m("CompteBancaire.txt");
    double montant ;
    CompteBancaire c;
    int reponse;

    do{
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
            break;
        default:
            break;
        }

    }while(reponse != 4 );
    return 0;
    */

    Menu m("CompteEpargne.txt");
    double montant ;
    CompteEpargne c;
    int reponse;

    do{
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
            break;
        case 4: // calculer interets
            cout << "Interets dans l'année" << c.CalculerInterets() << endl ;
            break;
        default:
            break;
        }

    }while(reponse != 5 );
    return 0;
}
