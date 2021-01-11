#include<iostream>
#include<math.h>
using namespace std;


//declare variables
int b,x,y;

int sorting(int mat[][100],int i,int j)
{
        int t;
        if(i<y)
        {
            if(mat[b][j]>mat[b][i])
                {
                    if(j!=0)
                    {
                        t=mat[b][j];
                        mat[b][j]=mat[b][i];
                        mat[b][i]=t;
                        sorting(mat,j,j-1);
                    }
                    else
                    {
                        t=mat[b][j];
                        mat[b][j]=mat[b][i];
                        mat[b][i]=t;
                        j=i;
                        sorting(mat,++i,j);}
                    }
            else
            {
                j=i;
                sorting(mat,++i,j);
            }
        }
        else
            return 0;
}

int main()
{
    //getting the matrix size
    cout<<"Enter Num of Rows : ";
    cin>>x;
    cout<<"Enter Num of Columns : ";
    cin>>y;
    cout<<endl;

    int arr[x][100]; //declare the matrix array
    int arrt[y][100];   //declare the transpose of matrix

    //getting the elements of the matrix
    for(int i=0;i<x;i++)
        {
            cout<<"Enter row "<<i+1<<" numbers : ";
            for(int j=0;j<y;j++)
                cin>>arr[i][j];
        }

        //display the initial matrix
        cout<<"\n\tInitial Matrix\n\n";
         for (int c=0;c<x;c++)
      {
          for(int d=0;d<y;d++)
            cout<<"\t"<<arr[c][d];
            cout<<endl;
      }
      cout<<endl;

        for(b=0;b<x;b++)
        sorting(arr,1,0);//sorting function

        //getting the transpose of matrix
        for (int c=0;c<x;c++)
      {
          for(int d=0;d<y;d++)
            arrt[d][c]=arr[c][d];
      }

        for(b=0;b<y;b++)
        sorting(arrt,1,0);  //sorting function

       //again getting the transpose of matrix
        for (int c=0;c<x;c++)
      {
          for(int d=0;d<y;d++)
            arr[d][c]=arrt[c][d];
      }

      //display the sorted matrix
      cout<<"\n\tSorted Matrix\n\n";
      for (int c=0;c<x;c++)
      {
          for(int d=0;d<y;d++)
            cout<<"\t"<<arr[c][d];
            cout<<endl;
      }
      cout<<endl;
}
