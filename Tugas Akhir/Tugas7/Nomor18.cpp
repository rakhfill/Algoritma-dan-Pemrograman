#include <iostream>
using namespace std;

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int m,n;

    cout<<"\t\t\tProgram Penjumlahan 2 Matriks\n";
    cout<<"Matriks A (3x3): \n\n";

    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            cin>>A[m][n];
        }
    }
    cout<<endl;

    cout<<"Matriks B (3x3): \n\n";

    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            cin>>B[m][n];
        }
    }
    cout<<endl;

    cout<<"Hasil: \n\n";
    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            C[m][n]=A[m][n]+B[m][n];
        }
    }

    for(m=0; m<3; m++)
    {
        for(n=0; n<3; n++)
        {
            cout<<" "<<A[m][n];
        }
        if(m==1)
        {
            cout<<" +";
        }
        else
        cout<<"\t";
        for(n=0; n<3; n++)
        {
            cout<<" "<<B[m][n];
        }
        if(m==1)
        {
            cout<<" =";
        }
        else
        cout<<"\t";
        for(n=0; n<3; n++)
        {
            cout<<" "<<C[m][n];
        }
    cout<<endl;
    }
}