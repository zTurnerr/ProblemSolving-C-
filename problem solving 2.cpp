#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    for(double i = 0 ; i <= 2 ; i += .2 )
    {
        for(double j = 1 ; j < 4 ; ++j)
        {
            cout << i <<"  " << i+j << endl;
        }
    }

    return 0;
}




/*
junk goes here :-

*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
    jeff and digits

    int n , input , five=0 , zero=0 ;
    cin >> n ;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> input ;
        if(input == 5)
            five++;
        else
            zero++;
    }
    if (zero == 0 )
        cout << "-1" ;
    else if (five < 9 )
        cout << "0";
    else
    {
        five -= five % 9 ;
        for(int i = 0 ; i < five ;++i)
         {
             cout << "5";
         }
        for(int i = 0 ; i < zero ; ++i)
            cout << "0";
    }

*************************************

    traslation problem

     string input1 , input2 , inverse ;
    cin >> input1 >> input2 ;
    int x = input1.size() ;
    for(int i = x-1 ; i >=0  ; --i)
    {
        inverse.append(1u,input1[i]);
    }
    if(inverse == input2)
        cout << "YES" ;
    else
        cout << "NO" ;
*************************************
    supercentral point problem


   int n , xarr[200] , yarr[200] ,counter = 0 ;
    bool right=false , left = false , upper = false , lower = false ;
    cin >> n ;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> xarr[i] ;
        cin >> yarr[i] ;
    }
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j =0;j < n;++j)
        {
            if( j = i )
            {
                continue ;
            }else
            {

                if(xarr[j] > xarr[i] && yarr[i] == yarr[j])
                    right = true ;
                if(xarr[j] < xarr[i] && yarr[i] == yarr[j])
                    left = true ;
                if(xarr[j] == xarr[i] && yarr[i] < yarr[j])
                    upper = true ;
                if(xarr[j] == xarr[i] && yarr[i] > yarr[j])
                    lower = true ;
                }

                if(lower&&upper&&left&&right)
                        counter++;
               cout << xarr[i] << " " << yarr[i] << endl;
                cout << right << " " << left << "  " << upper << "  " << lower << endl << endl;

                right = false ;
                left = false ;
                upper = false ;
                lower = false ;
        }
        cout << counter << endl;

*************************************
        dragons problem


     int s , n ,smallest = 0 , smallestindex = 0 ,swaper1 = 0 ,swaper2=0,swaper3=0;
     int arrofx[1000] , arrofy[1000] ;
     cin >> s >> n ;
     for(int i = 0 ; i < n ; ++i)
     {
        cin >> arrofx[i] >> arrofy[i] ;
     }
     for(int i = 0 ; i < n ; ++i)
     {
        smallest = arrofx[i] ;
        for(int j = i ; j<n ; ++j)
        {
            if(smallest >= arrofx[j])
            {
                smallestindex = j ;
                smallest = arrofx[j] ;
            }
        }
        swaper1 = arrofx[i] ;
        swaper2 = arrofy[i] ;
        arrofx[i] = arrofx[smallestindex] ;
        arrofy[i] = arrofy[smallestindex] ;
        arrofx[smallestindex] = swaper1 ;
        arrofy[smallestindex] = swaper2 ;

     }
     for(int i = 0 ; i < n ; ++i)
     {
        cout << arrofx[i] << "  " << arrofy[i] <<endl;
     }
     for(int i = 0 ; i < n ;++i)
     {
        if(s > arrofx[i])
        {
            s += arrofy[i] ;
           cout << s << " " ;
        }else{
            cout <<"NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;


*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
*************************************
    Takahashi's information problem
    need to be submitted

    double c11,c12,c13,c21,c22,c23,c31,c32,c33;
    double helper1 =0 ,helper2 =0 , helper3 =0 ;
    cin>>c11>>c12>>c13>>c21>>c22>>c23>>c31>>c32>>c33;
    helper1 = ((c11+c12+c13)-(c21+c22+c23))/3;
    helper2 = (c11-c21);
    helper3 = (helper1 + helper2) / 2 ;
    int x = helper3;
    cout << helper1 << "  " <<helper2 << endl;
    cout << x << "  " << helper3 << endl;
    if(helper3-x  != 0 || helper3 < 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;


*************************************

    hexadecimal theorem problem
    need to be submitted

    long long inputt , fibo[45] , inputindex=0;
    fibo[0]=0;
    fibo[1] = 1;
    for(int i = 2 ; i <= 45 ; ++i)
        fibo[i]=fibo[i-2] + fibo[i-1] ;
    cin >> inputt ;
    if(inputt==0)
    {
        cout << "0"<<" " << "0"<<" " <<"0" <<endl;
        return 0 ;
    }
    else if (inputt==1)
    {
        cout << "1"<<" " <<"0"<<" " <<"0" << endl;
        return 0;
    }
    else if (inputt==2)
    {
       cout << "1"<<" " <<"0"<<" " <<"1" << endl;
        return 0;
    }
    for(int i = 0 ; i <= 45 ; ++i)
    {
        if(inputt == fibo[i])
        {
            inputindex = i ;
            break;
        }
    }
    cout << fibo[inputindex-1] << " " << fibo[inputindex-3] << " " << fibo[inputindex-4] << endl;




*/
