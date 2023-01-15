#include <iostream>
using namespace std;

int main()
{
    while(true){
    double *v;
    double min,max;
    int n;
    cout<<"inserisci valore minimo:"<<endl;
    cin>>min;
    cout<<"inserisci valore massimo:"<<endl;
    cin>>max;
    cout<<"inserisci numero di tagli:"<<endl;
    cin>>n;
    v = new double[n];

    n--;
    float incremento = (max - min) / (n); 
    v[0] = min;
    for (int i = 1; i < n+1; i++)
    {
    v[i] = v[i-1] + incremento;

    }
    int i=0;
    while(true)
    {
        system("pause");
        if(i>n)
            break;
        cout<<"taglio "<<i+1<<":"<<" "<<v[i]<<endl;
                i++;
    }
    }

}