
#include"complexe.h"
#include"complexe.cpp" 
using namespace std;
int main()
{
    complexe C1(3,2);
    complexe C2(5,2);
cout<<"1ere nombre : ";
C1.afficher();
cout<<"2eme nombre: ";
C2.afficher();
cout<<"la somme de deux nombre  est : ";
complexe S=C1+C2;
S.afficher();
	return 0;
}
