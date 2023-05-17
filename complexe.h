#include<iostream>
#include<stdio.h>
#include<math.h>
#ifndef COMPLEXE_H
#define COMPLEXE_H

using namespace std;
class complexe{
 private :
	int rel;
    int img;
  public:
  complexe(int,int);
  complexe( const complexe&);
  complexe operator+(const complexe &);
//  complexe operator*(const complexe &);
  float module();
  void afficher();
  void setRel(int);
  void setImg(int);
//  friend   complexe operator*(const complexe&,const complexe&);
};
#endif
