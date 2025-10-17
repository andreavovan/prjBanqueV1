/**
  @file CompteClient.cpp
  @brief Implémentation de la classe CompteClient
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */

#include "compteclient.h"
#include "main.cpp"

/**
 * @brief CompteClient::CompteClient
 * @param _nom
 * @param _numero
 */
CompteClient::CompteClient(std::string _nom, int _numero): nom(_nom), numero(_numero)
{
    compteEpargne = nullptr ;
    compteBancaire = new CompteBancaire (0);
}

/**
 * @brief CompteClient::~CompteClient
 */
CompteClient::~CompteClient()
{
    delete compteBancaire ;
    if (compteEpargne != nullptr){
        delete compteEpargne ;
    }
}
/**
 * @brief CompteClient::OuvrirCompteargne
 */
void CompteClient::OuvrirCompteargne()
{
    float nvMontant ;
    float nvTaux;
    if (compteEpargne != nullptr){
        cout << "L'ouverture d'un second compte épargne n'est pas autorisé" << endl ;
    }else {
        cout << "Saisissez le nouveau montant du solde :" ;
        cin >> nvMontant ;
        cout << "Saisissez le nouveau taux d'interet :" ;
        cin >> nvTaux ;
        compteEpargne = new CompteEpargne(nvMontant , nvTaux);
    }

}
/**
 * @brief CompteClient::GererCompteEpargne
 */
void CompteClient::GererCompteEpargne()
{
    Menu m("CompteEpargne.txt");
    double montant ;
    int reponse;

    do{
        reponse = m.AfficherEtRecupererReponse();
        switch(reponse)
        {
        case 1:  // Consultation du solde
            cout<<"Solde : "<<compteEpargne->ConsulterSolde() << endl;
            break;
        case 2: // depot
            cout << "Combien voulez vous deposer ?";
            cin>>montant;
            compteEpargne->Deposer(montant);
            break;
        case 3: // retrait
            cout<<"Combien voulez vous retirer ?";
            cin>>montant ;
            if (!compteEpargne->Retirer(montant))
            {
                cout << "Retrait impossible! "<< endl ;
            }
            break;
        case 4: // calculer interets
            cout << "Interets dans l'année" << compteEpargne->CalculerInterets() << endl ;
            break;
        case 5:  //créditer interets
            compteEpargne->CrediterInterets();
        default:
            break;
        }

    }while(reponse != 6 );


}
/**
 * @brief CompteClient::GererCompteBancaire
 */
void CompteClient::GererCompteBancaire()
{
    Menu m("CompteBancaire.txt");
    double montant ;
    int reponse;

    do{
        reponse = m.AfficherEtRecupererReponse();
        switch(reponse)
        {
        case 1:  // Consultation du solde
            cout<<"Solde : "<<compteBancaire->ConsulterSolde() << endl;
            break;
        case 2: // depot
            cout << "Combien voulez vous deposer ?";
            cin>>montant;
            compteBancaire->Deposer(montant);
            break;
        case 3: // retrait
            cout<<"Combien voulez vous retirer ?";
            cin>>montant ;
            if (!compteBancaire->Retirer(montant))
            {
                cout << "Retrait impossible! "<< endl ;
            }
            break;
        default:
            break;
        }

    }while(reponse != 4 );


}





