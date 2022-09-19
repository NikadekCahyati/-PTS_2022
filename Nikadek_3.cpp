#include <iostream>
using namespace std;

int main () {
float phi = 3.14; 
float kelilinglingkaran;
float luaslingkaran;
float r;
float d;
cout << "masukkan jari-jari : ";
cin>> r;

luaslingkaran = phi*r*r;
cout<< "luas lingkaran adalah " << luaslingkaran;
   
cout<< "masukkan diameter lingkaran : ";
cin>> d;

kelilinglingkaran = phi*d;
cout<< "keliling lingkaran adalah " << kelilinglingkaran;
   
   
}