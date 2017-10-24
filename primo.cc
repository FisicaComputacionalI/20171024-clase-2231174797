//Numerosprimos
//HUmberto Vazquez Castro
#include<iostream>
using namespace std;
int main()
{
  int N=12;
  int flag=0;
  int divisor=0;
  cout<<"inserte un numero_"<<endl;
  cin>>N;
  for(int i=2; i<=(N/2);i++)
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
