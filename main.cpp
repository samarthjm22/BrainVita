#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include <cstdlib>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<time.h>

using namespace std;

int main()
{
    char arr[8][8];
    int i,j,k,flag=1,m,n,p,q,r,s,t,u;

    for(i=1;i<8;i++)
        for(j=1;j<8;j++)
            arr[i][j]='@';

    arr[0][0]='0';
    arr[0][1]='1';
    arr[0][2]='2';
    arr[0][3]='3';
    arr[0][4]='4';
    arr[0][5]='5';
    arr[0][6]='6';
    arr[0][7]='7';

    arr[0][0]='0';
    arr[1][0]='1';
    arr[2][0]='2';
    arr[3][0]='3';
    arr[4][0]='4';
    arr[5][0]='5';
    arr[6][0]='6';
    arr[7][0]='7';

    arr[1][1]='#';
    arr[1][2]='#';
    arr[2][1]='#';
    arr[2][2]='#';

    arr[1][6]='#';
    arr[1][7]='#';
    arr[2][6]='#';
    arr[2][7]='#';

    arr[6][1]='#';
    arr[6][2]='#';
    arr[7][1]='#';
    arr[7][2]='#';

    arr[6][6]='#';
    arr[6][7]='#';
    arr[7][6]='#';
    arr[7][7]='#';

    arr[4][4]=' ';


    while(flag<32)
    {
        p:
        system("cls");
        cout<<"\n";
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cout<<" "<<arr[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n\n\n\n Enter 0 to exit";
        cout<<"\n\n Move Marbel from: ";
        cin>>m;
        if(m==0)
            exit(0);

        cout<<" Move Marbel to: ";
        cin>>n;
        q=m%10;
        p=m/10;
        s=n%10;
        r=n/10;
        t=(p+r)/2;
        u=(q+s)/2;

        if((arr[p][q]=='@') && (arr[r][s]==' ') && (arr[t][u]=='@'))
        {
            arr[r][s]='@';
            arr[p][q]=' ';
            arr[t][u]=' ';
            flag++;
        }
        else
        {
            cout<<"\n\n\n Invalid Move\n\n";
            system("PAUSE");
            goto p;
        }


    }


    return 0;
}
