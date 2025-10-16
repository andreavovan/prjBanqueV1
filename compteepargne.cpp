/**
  @file CompteEpargne.cpp
  @brief Implémentation de la classe CompteEpargne ;
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */


#include <iostream>
#include "compteepargne.h"


/**
 * @brief CompteEpargne::CompteEpargne
 * @param _tauxInterets
 * @param _solde  :par default egal a zero
 */
CompteEpargne::CompteEpargne(float _tauxInterets, float _solde): tauxInterets(_tauxInterets),
    CompteBancaire(_solde)
{
    std::cout << "Constructeur Param" << std::endl ;
}
/**
 * @brief CompteEpargne::ModifierTaux
 * @param _newTauxInterets
 */
void CompteEpargne::ModifierTaux(float _newTauxInterets)
{
    tauxInterets = _newTauxInterets ;
}
/**
 * @brief CompteEpargne::CrediterInterets
 */
void CompteEpargne::CrediterInterets()
{
    solde+=CalculerInterets();
}
/**
 * @brief CompteEpargne::CalculerInterets
 * @return :un float
 */
float CompteEpargne::CalculerInterets()
{
    float calcul;
    calcul = tauxInterets * solde ;
    return calcul ;
}
