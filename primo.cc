//Numerosprimos
//HUmberto Vazquez Castro
#include<iostream>
using namespace std;
int main()
{
  long N=12;
  long flag=0;
  long divisor=0;
  cout<<"inserte un numero_"<<endl;
  cin>>N;
  for(long i=2; i<=(N/2);i++)
    {
      if(N%i==0){
	flag=1;
	divisor=i;
	break;
      }
    }
  if(flag==1){
    cout<<"tu numero no es primo"<<endl;
    cout<<"porque es divisible entre"<<divisor<<endl;
  }
  else
    cout<<"tu numero es primo"<<endl;
  return 0;
}
