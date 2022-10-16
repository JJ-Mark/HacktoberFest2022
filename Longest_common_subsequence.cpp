#include <bits/stdc++.h>
using namespace std;

void LCS_Algo( char *A, char *B, int m, int n)
{

    int LCS[m+1][n+1];  //2-d array 
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                LCS[i][j]=0;
            }
            else if(A[i-1]==B[j-1])  
            {
                LCS[i][j]=LCS[i-1][j-1] + 1;
            }
            else 
            {
                LCS[i][j]=max(LCS[i-1][j], LCS[i][j-1]);
            }

        }
    }

    int index = LCS[m][n];
    char newarray[index+1];  
    cout<<index;
    
    newarray[index]='\0';

    int i=m , j=n;
    while (i>0 && j>0)
    {
        if(A[i-1]==B[j-1])     
        {
            newarray[index-1]=A[i-1];
        i--;
        j--;
        index--;
        }
       
        else if(LCS[i-1][j]> LCS[i][j-1])  
        {
            i--;
        }
        else
        {
            j--;
        }
    }
 cout<<"A: "<< A<<endl;
 cout<<"B: "<<B<<endl;
 cout<<"LCS: "<< newarray;


}
int main()
{
    char A[]="longest";
    char B[]="stone";
    int m = strlen(A);
    int n = strlen(B);

    LCS_Algo(A,B,m,n);
}