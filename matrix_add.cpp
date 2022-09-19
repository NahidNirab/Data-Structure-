#include<iostream>
using namespace std;
int main()
{
    int row_a,row_b,col_a,col_b,i,j;
    cout<<"input the row and column of matrix A \n";
    cin>>row_a>>col_a;
    cout<<"input the row and column of matrix B \n";
    cin>>row_b>>col_b;
    if(row_a==row_b&&col_a==col_b)
    {
        int a[row_a][col_a];
        int b[row_b][col_b];
        int c[row_a][col_a];
        cout<<"input matrix A\n";
        for(i=0; i<row_a; i++)
        {
            for(j=0; j<col_a; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"input matrix B\n";
        for(i=0; i<row_b; i++)
        {
            for(j=0; j<col_b; j++)
            {
                cin>>b[i][j];
            }
        }
        for(i=0; i<row_a; i++)
        {
            for(j=0; j<col_a; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"Addition not possible (dimension error)";
    }
}
