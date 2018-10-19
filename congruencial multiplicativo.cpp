#include <iostream.h>
#include <conio.h>
#include <math.h>

void main ()
{
   int m,a,k,g,z,n,i,h;
	float x[100],r[100];
   cout<<"ingresa g =";
   cin>>g;
   m = pow(2,g);
   cout<<"ingresa k =";
   cin>>k;
   a = 5+8*k;
   cout<<"ingresa x0 =";
   cin>>x[0];
 	z = m-1;
   cout<<"numero de iteraciones: ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
     h = (int)a*x[i-1];
     x[i]=(h)%m;
     r[i]=x[i]/z;
     cout<<r[i]<<"\n";
   }
	getch();
}