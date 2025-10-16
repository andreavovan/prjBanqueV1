/**
  @file CompteClient.cpp
  @brief Implémentation de la classe CompteClient
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */

#include "compteclient.h"

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
