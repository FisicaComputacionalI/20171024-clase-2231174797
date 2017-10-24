//Programa de la suma de los primeros n-naturales
#include<iostream>
using namespace std;
int main()
{
  long N;
  long sum=0;
 cout<<"inserte un numero_"<<endl;
 cin>>N;
 for(long i=1;i<=N;i++)
   {sum=sum+i;
}
 cout<<"la suma es_"<<sum<<endl;
 return 0;
}
