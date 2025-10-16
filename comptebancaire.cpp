/**
  @file CompteBancaire.cpp
  @brief Implémentation de la classe CompteBancaire
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */


#include "comptebancaire.h"
#include <iostream>

/**
 * @brief CompteBancaire::CompteBancaire
 * @param _solde : par default est egal a zero
 */
CompteBancaire::CompteBancaire(const float _solde): solde(_solde)
{
    std::cout << "Constructeur en param" << std::endl ;
}
/**
 * @brief CompteBancaire::Deposer
 * @param _montant : ajoute le montant au solde si le montant est positif
 */

void CompteBancaire::Deposer(float _montant)
{
    solde = solde +  _montant ;
}

/**
 * @brief CompteBancaire::Retirer
 * @param _montant
 * @return : un booleen vrai si operation possible, faux sinon
 */
bool CompteBancaire::Retirer(float _montant)
{
    bool ok = false ;
    if(_montant>=0){
        if ((solde-_montant)>=_montant){
            ok = true;
            if(ok==true)
            {
                solde=solde-_montant;
            }
        }
    }return ok;

}

/**
 * @brief CompteBancaire::ConsulterSolde
 * @return : un float
 */
float CompteBancaire::ConsulterSolde()
{
    return solde ;
}
