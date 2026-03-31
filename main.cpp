#include"functii.h"

int main()
{
    int n=3;
    double M=10;
    
    double w[n]={6, 4, 8};
    double p[n]={3, 4, 6};
    double x[n]={0,0,0};

    cout<<"capacitate rucsac: "<<M<<endl;
    cout<<"nr obiecte: "<<n<<endl;

    // test 1
    rucsac_1(w, p, n, M, x);
    double profit1=0;
    for(int i=0;i<n;++i)
    {
        profit1+=p[i]*x[i];
    }
    cout<<"proportii: ";
    afisare(x,n);
    cout<<"profit total 1: "<<profit1<<endl;

    // test 2
    rucsac_2(w, p, n, M, x);
    double profit2=0;
    for(int i=0;i<n;++i)
    {
        profit2+=p[i]*x[i];
    }
    cout<<"proportii: ";
    afisare(x,n);
    cout<<"profit total 2: "<<profit2<<endl;

    return 0;
}