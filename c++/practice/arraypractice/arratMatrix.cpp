#include<iostream>
using namespace std;
class matrix
{
    public:
     int m,n,arr[200][200];
    matrix( int M=0, int N=0)
    {
        m=M;
        n=N;
    }
    void transpose()
    {
        for(int i=0;i<m;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp;
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    int diagonalSum()
    {
        int temp;
        if(m==n)
        {
            for(int i=0;i<n;i++)
            {
             temp=temp+arr[i][i];   
            }
        }
        else
        cout<<"Not possible as the given matrix is not a square matrix\n";
        return temp;
    }
   friend ostream& operator<<(ostream &o,matrix &mat);
   friend istream& operator>>(istream &i,matrix &mat);
   friend matrix operator+(matrix &m1,matrix &m2);
   friend matrix operator-(matrix &m1,matrix &m2);
   friend matrix operator*(matrix &m1,matrix &m2);
    
};
matrix operator*(matrix &m1,matrix &m2)
{
    matrix temp;
    if(m1.n==m2.m)
    {
        temp.m=m1.m;
        temp.n=m2.n;
        for(int i=0;i<temp.m;i++)
        {
            for(int j=0;j<temp.n;j++)
            {
                int elmt=0;
                for(int r=0;r<m1.m;r++)
                {
                    elmt=elmt+m1.arr[i][r]*m2.arr[r][j];
                }
                temp.arr[i][j]=elmt;
            }
        }
    }
    return temp;
}
matrix operator-(matrix &m1,matrix &m2)
{
    matrix temp;
    if((m1.m==m2.m)&&(m1.n==m2.n))
    {
        temp.m=m1.m;
        temp.n=m1.n;
        for(int i=0;i<temp.m;i++)
        {
            for(int j=0;j<temp.n;j++)
            {
                temp.arr[i][j]=m1.arr[i][j]-m2.arr[i][j];
            }
        }
    }
    else
    cout<<"fir gand fulla rha hai maderchod\n";
    return temp;
}
matrix operator+(matrix &m1,matrix &m2)
{
    matrix temp;
if((m1.m==m2.m)&&(m1.n==m2.n))
{
    temp.m=m1.m;
    temp.n=m1.n;
    for(int i=0;i<temp.m;i++)
    {
        for(int j=0;j<temp.n;j++)
        {
            temp.arr[i][j]=m1.arr[i][j]+m2.arr[i][j];
        }
    }
}
else
  cout<<"Gand jyda mat lagao e sum na hosakela\n";
  return temp;
}

  ostream& operator<<(ostream &o,matrix &mat)
    {
        for(int i=0;i<mat.m;i++)
        {
            for(int j=0;j<mat.n;j++)
            {
                o<<mat.arr[i][j]<<" ";
            }
            o<<endl;
        }
        return o;
    }
    istream& operator>>(istream &i,matrix &mat)
    {
        for(int i=0;i<mat.m;i++)
        {
            for(int j=0;j<mat.n;j++)
            {
                cin>>mat.arr[i][j];
            }
        }
        return i;
    }
int main()
{
    
    matrix a,b,c;
    cout<<"Enter the row and column of an array \n";
    cin>>a.m>>a.n;
    cout<<"Enter the element of an array\n";
    cin>>a;
    cout<<"Your matrix is \n";
    cout<<a;
    cout<<"Sum of diagonal element is \n"<<a.diagonalSum();
    return 0;

}