#include<bits/stdc++.h>
using namespace std;
int brr[5];
int main(void)
{
    int n;
    cin >> n;
    int arr[n], team[n][5];



    for(int i=0; i<n ; i ++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n ; i ++)
    {
        if( arr[i] == 1)brr[0]++ ;
        else if( arr[i] == 2)brr[1]++ ;
        else  brr[2]++ ;
    }


    sort(brr, brr+3);


    cout << brr[0] << endl;

      for(int i=0; i<brr[0] ; i++)
     {
         int am=0, bm=0, cm=0;

         for(int k=0, j=0; k<n ; k++)
         {
             if( arr[k] == 1 && am != 1)
             {
                 am=1;
                 team[i][0] = k;
                 arr[k] = -1;
             }
             else if( arr[k] == 2 && bm != 1)
             {
                 team[i][1] = k;
                 bm = 1;
                 arr[k] = -1;
             }
             else  if( arr[k] == 3 && cm != 1)
             {
                 team[i][2] = k;
                 cm = 1;
                 arr[k] = -1;
             }
         }
     }

    /*for(int i=0; i<brr[0] ; i++)
    {
        for(int j=0; j<3 ; j++)
        {
            team[i][j] = i ;
        }

        // cout <<  team[i][0] << " " <<  team[i][1] << " " <<  team[i][2]<< endl;
    }*/
    for(int i=0; i<brr[0] ; i ++)
    {
       /* for(int j=0; j<3 ; j ++)
        {
            cout << team[i][j] << " ";
        }
        cout   << endl;*/
          cout <<  team[i][0] + 1 << " " <<  team[i][1] + 1 << " " <<  team[i][2] + 1<< endl;
    }



    return 0;
}


