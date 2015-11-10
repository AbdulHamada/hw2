/*
 * HmoeWork 2
 * Abdul Malek Hamada
 * 
 */
#include<iostream>
#include<fstream>

using namespace std;

int main(void){
  
	double x0 = 0.5;
	double x;
	
	int Nskip = 100; //Number of iterations to skip
	int Nend  = 200; //Number of total iterations
	double A[Nend-Nskip]; // to carrz out Nskip steps before we print values. 
  
  ofstream out ("output.dat");
	
	for(double r=0; r <= 4; r += 0.005){
	   x=x0;
	   
	   for(int i=1; i <= Nskip; i++){
		   x = r*x*(1-x);
	     
	   }
		   
	      for(int i=Nskip+1; i <= Nend; i++){
	   		   x = r*x*(1-x);
			   A[i-Nskip-1]=x ;
	       cout << "r=" << r << "\t p[" << i-Nskip-1 << "]=" << A[i-Nskip-1] << endl;
		}
	}
  out.close();

	return 0;
}
