/**
  @file CompteEpargne.h
  @brief Déclaration de la classe CompteEpargne
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */
#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
private:
    float tauxInterets ;
public:
    CompteEpargne(float _tauxInterets=0.03 , float _solde=0);
    void ModifierTaux(float _newTauxInterets);
    void CrediterInterets();
    float CalculerInterets();
};

#endif // COMPTEEPARGNE_H
