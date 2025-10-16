/**
  @file CompteBancaire.h
  @brief Déclaration de la classe CompteBancaire
  @version 1.0
  @author Andrea vovan
  @date 10/10/2025
    */

#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


class CompteBancaire
{
protected:
    /** Le solde */
    float solde;
public:

    CompteBancaire(const float _solde =0);

    void Deposer(float _montant);
    bool Retirer(float _montant);
    float ConsulterSolde();
};

#endif // COMPTEBANCAIRE_H
