#include"functii.h"

void rucsac_1(double w[], double p[], int n, double M, double x[])
{
    double C=0;
    int id[n];

    for(int i=0;i<n;++i)
    {
        x[i]=0;
        id[i]=i;
    }

    sortare1(w,p,n,x);

    int index=0;
    while(C<M && index<n)
    {
        if (C+w[index]<=M) 
        {
            x[id[index]]=1;
            C+=w[index];
            index++;
        } 
        else 
        {
            x[id[index]]=(M-C)/w[index];
            C=M;
        }
    }
}

void rucsac_2(double w[], double p[], int n, double M, double x[])
{
    double C=0;

    for(int i=0;i<n;++i)
    {
        x[i]=0;
    }

    sortare2(w,p,n,x);

    int index=0;
    while(C<M && index<n)
    {
        if (C+w[index]<=M) 
        {
            x[index]=1;
            C+=w[index];
            index++;
        } 
        else 
        {
            x[index]=(M-C)/w[index];
            C=M;
        }
    }
}

void sortare1(double w[], double p[], int n, double x[])
{
    for (int i=0;i<n-1;i++) 
    {
        bool ok=false;
        for(int j=0;j<n-i-1;++j)
        {
            if(p[j]<p[j+1])
            {
                swap(x[j],x[j+1]);
                swap(w[j],w[j+1]);
                swap(p[j],p[j+1]);
            }
        }
    }
}

void sortare2(double w[], double p[], int n, double x[])
{
    for (int i=0;i<n-1;i++) 
    {
        bool ok=false;
        for(int j=0;j<n-i-1;++j)
        {
            if((p[j]/w[j])<(p[j+1]/w[j+1]))
            {
                swap(x[j],x[j+1]);
                swap(w[j],w[j+1]);
                swap(p[j],p[j+1]);
            }
        }
    }
}

void afisare(double x[], int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}