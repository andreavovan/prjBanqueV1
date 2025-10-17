/**
  @file CompteClient.h
  @brief Déclaration de la classe CompteClient
  @version 1.0
  @author Andrea vovan
  @date 16/10/2025
    */

#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include <iostream>
#include "comptebancaire.h"
#include "compteepargne.h"

class CompteClient
{
private:
    /** le nom client */
    std::string nom ;
    /** le numero du client */
    int numero ;
    /** pointeur de compteBancaire sur compteClient */
    CompteBancaire* compteBancaire;
    /** pointeur de CompteEpargne sur compteCleint */
    CompteEpargne* compteEpargne;
public:
    CompteClient(std::string _nom , int _numero);
    ~CompteClient();
    void  OuvrirCompteargne();
    void  GererCompteEpargne();
    void  GererCompteBancaire();
};

#endif // COMPTECLIENT_H
