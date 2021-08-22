#include "stock.h"




stock::stock()
{
quantite=0;
id="";
nom="";

}
stock:: stock( QString id,QString nom,int quantite)
{
  this->id=id;
  this->nom=nom;
  this->quantite=quantite;

}
QString stock::get_id(){return id;}
QString stock::get_nom(){return nom;}

int stock::get_quantite(){return  quantite;}
