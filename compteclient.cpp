#include "compteclient.h"


CompteClient::CompteClient(std::string _nom, int _numero): nom(_nom), numero(_numero)
{
    compteEpargne = nullptr ;
    compteBancaire = new CompteBancaire (0);
}

CompteClient::~CompteClient()
{
    delete compteBancaire ;
    if (compteEpargne != nullptr){
        delete compteEpargne ;
    }
}
