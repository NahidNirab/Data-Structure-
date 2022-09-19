#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
L:  cout<<"input the row and column"<< endl;
    cin>>row>>col;
    int a[row][col];
    if (row%2!=0 && col%2!=0 && row == col)
    {
        {
        cout<<"input matrix "<< endl;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cin>>a[i][j];
            }
        }
    }
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cout<< a[i][j]<<"\t";
            }
            cout<<endl;
        }
        int r=0;
        for (j=0;j<col; j++)
        {
            r=a[row/2][j] + r;
        }
        cout << "Summation of the middle row :  " << r << endl;
        int p=0;
        for (i=0;i<row; i++)
        {
            p=a[i][col/2] + p;
        }
        cout << "Summation of the middle column " << p;
    }
    else
    {
       cout <<  "wrong input" << endl;
       goto L;
    }
        return 0;
}
