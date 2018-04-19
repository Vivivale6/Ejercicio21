#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void inic(double *u_viejo, double min, double delta_x, int xn);
void imprime(double x, double delta_x, int xn, double *u_nuevo);


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

void imprime(double x, double delta_x, int xn, double *u_nuevo){
  int i ; 
  for (i=0; i < xn ; i++){
   
    x=i*delta_x;
   
    cout << x <<" " << u_nuevo[i]<< endl;

 } 



}

int main(){

double c=1.0;
double t=1.0;
double delta_x=0.1;
double delta_t=0.1;
double *u_viejo;
double *u_nuevo;
double min = 0.0 , max = 2.0 ;
double x=0;
 int xn = ((max-min)/delta_x) +1;
 int tn = (t/delta_t) +1;  
 
int i ;
int j; 

 u_viejo= new double[xn];
 u_nuevo= new double[xn];

  

inic(u_viejo,min,delta_x,xn);
 

 
 for(j=0; j<tn ; j++) {
   
   u_nuevo[0]=0;
   
   
   for (i=1; i< xn ; i++){
     
       u_nuevo[i]= u_viejo[i] - c*delta_t/delta_x*(u_viejo[i]- u_viejo[i+1]);
     }
   
   for(i=0; i < xn ; i++){

	    u_viejo[i]= u_nuevo[i];

	  }
       
 }
   

 imprime(x,delta_x,xn,u_nuevo);
 
 
 
    
 return 0; 
}
