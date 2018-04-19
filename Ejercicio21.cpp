#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void inic(double *u_viejo, double min, double delta_x, int xn);


void inic(double *u_viejo, double min, double delta_x, int xn){
  double x;
  int i; 
  for (i =0; i<xn; i++){
    x= min + i * delta_x;
    
    if (x>0.75 && x<=1.25){
      
      u_viejo[i]=1.0;
      
    } else{
      u_viejo[i]=0.0;
    }
  }

   
  }
int main(){

double c=1.0;
double t=1.0;
double delta_x=0.1;
double delta_t=0.01;
double min = 0.0, max=2.0;
double *u_viejo;
double *u_nuevo;
double x; 
int i ;
int j; 


 int xn = (max-min)/delta_x + 1;
 u_viejo= new double[xn];
 u_nuevo= new double[xn];

 
 for (i=0; i < xn ; i++){
    x = min +i * delta_x;
 }
 
 for(i=0; i<xn ; i++) {
    u_nuevo[i]= u_viejo[i] - c*delta_t/delta_x*(u_nuevo[i]- u_viejo[i+1]);
    cout << u_viejo[i]<<" " << u_nuevo[i]<< endl;
 }
   
 for (i=0;i< xn;i++){
   u_nuevo[i]=u_viejo[i];
 }
 
 
 inic(u_viejo,min,delta_x,xn);
 
    
 return 0; 
}
