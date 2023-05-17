#include    "complexe.h"

 complexe::complexe(int x,int y)
{
  rel=x;
  img=y;	
}

 complexe   complexe::operator+(const complexe&C)
{
return  complexe(rel+C.rel,img+C.img);
}
//complexe::complexe(const complexe &C )
//{
//    rel=C.rel;
//    img=C.img;
//}
// complexe operator*(const complexe &C1,const complexe &C2)
//{
//	return complexe((C1.rel)*(C2.rel)-(C1.img)*(C2.img),(C1.rel)*(C2.img)+(C1.img)*(C2.rel));
//} 
void complexe::afficher()
{
	cout<<rel<<"+"<<img<<"i";
    cout<<endl;
}
float complexe::module()
{
	return (float) sqrt(pow(rel,2)+pow(img,2));
}
//complexe somme(const complexe& a,const complexe& b)
//{
//	complexe c(a.rel+b.rel,a.img+b.img);
//    return c;
//}
void complexe::setRel(int a){
	 rel=a;
        }
  void complexe::setImg(int b){
	 img=b;
}

