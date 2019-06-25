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


      return 0;
}




/*
Junk goes here ::


*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
*********************************************************************************
    omar and candy again

    string alph = "abcdefghijklmnopqrstuvwxyz" ;
    int alphcounter[26] , n;
    cin >> n ;
    for(int i = 0 ; i < 26 ; ++i )
         alphcounter[i] = 0 ;
    string input ;
    for(int p = 0 ; p < n ; ++p){
    cin >> input ;
    int x = input.size();
    for(int i = 0 ; i < x ; ++i)
    {
        for(int j = 0 ; j<26;++j)
        {
            if(input[i] == alph[j])
            alphcounter[j] ++ ;
        }
    }
    int index=0;
    char biggest[1] ;
    for(int i = 0 ; i < 26 ; i++)
    {
        if(alphcounter[i] > index)
        {
            index=alphcounter[i] ;
            biggest[0]=alph[i];
        }

    }
    cout << index << " " << biggest[0]<<endl;
    index=0;
    for(int i = 0 ; i < 26 ; ++i )
         alphcounter[i] = 0 ;

}


*********************************************************************************
    fibo seires triple problem

    int n ;
    cin >> n ;
    if(n>= 5 )
        cout << "4" ;
    else if(n==3)
        cout << "3" ;
    else if (n==2)
        cout << "2" ;
    else
        cout << "1" ;

*********************************************************************************

    dangerous problem


    int n , first , second , input1 , input2 ,minn = 0;
    cin >> n ;
    cin >> first >> second ;
    minn = second ;
    for(int i = 1 ; i < n ; ++i)
    {
        cin >> input1 >> input2 ;
        if(input1 < first )
        {
            first = input1 ;
            second = input2 ;
        }
        else if (input1 == first && input2 < second  )
        {
            first =input1 ;
            second = input2 ;
        }



    if(input2 < minn)
    minn =input2 ;
    }



    if(minn == second )
    cout << "Safe" ;
    else
    cout << "Danger";


*********************************************************************************
    league of luck problem



    int n , x, counter = 0 ;
    cin >> n;
    for(int i =0;i<n;++i)
    {
        cin >> x ;
        if(x==1)
        counter ++ ;
    }
    if(n%2 == 0){
    if(counter >= (n/2))
    cout << "YES" ;
    else
    cout << "NO";
    }else{

    if(counter >= (n/2)+1)
    cout << "YES";
    else
    cout << "NO";
    }


*********************************************************************************
    bussiness trip problem

    int k , water[12] , counter = 0 ,sum =0;
    cin >> k ;
    for(int i =0 ; i < 12 ; ++i)
    {
        cin >> water[i] ;
        sum += water[i];
    }
    if (sum < k )
    {
        cout << "-1" ;
        return 0;
    }
    sort(water , water+12);
    for(int i =11 ; i>=0 ; --i)
    {
        if(k > 0)
        {
            k-=water[i] ;
            counter ++;
        }

    }
    cout << counter ;
*********************************************************************************
    ilya and bank account problem

    long long x , helper0=0 , helper1=0 , helper2 =0;
    cin >> x ;
    if(x >=0)
      {
         cout<<x ; return 0;

      }
      else
    {
        helper0 = x / 10 ;
        helper1 = x % 10 ;
       // cout << helper1 << endl;
        x = x /100;
        x *= 10;
        x += helper1 ;
        if(helper0>= x )
            {cout << helper0 ; return 0;}
        else
            {cout << x ; return 0;}
*********************************************************************************
    cheap travel problem

    int n , m , a ,b ,minn=0,case1=0,case2=0,case3=0,help=0;
    cin >> n >> m >> a >> b;
    case1 = n * a ;
    case2 = ((n/m)*b)+((n-(n/m)*m)*a);
    if(n%m==0)
        case3 = (n/m) *b;
    else
        case3=((n/m)+1)*b ;

   // cout <<case1<<" " << case2 << "  " << case3 << endl;
    help=min(case1,case2);
    minn = min(help,case3);
    cout << minn ;
*********************************************************************************
    i wann be that guy probelm

    int n ,arr[100];
    cin >> n ;
    for(int i =1 ; i <= n ; ++i )
        arr[i] = i ;
    int p , ps ;
    cin >>p ;
    for(int i = 0 ; i < p ; ++i)
    {
        cin >> ps ;
        arr[ps] = 0 ;
    }
    int x , xs ;
    cin >>x ;
    for(int i = 0 ; i < x ; ++i)
    {
        cin >> xs ;
        arr[xs] = 0 ;
    }
    for(int i = 1 ; i<=n ;++i)
    {
        if(arr[i] != 0)
        {cout << "Oh, my keyboard!" << endl; return 0 ; }
    }
    cout << "I become the guy." ;

*********************************************************************************
    anton and letters problem

    string alph ="zxcvbnmlkjhgfdsaqwertyuiop";
    char input1[1000] ;
    cin.getline(input1,sizeof(input1));
    int s = strlen(input1) , counter = 0;
    for(int i = 0 ; i<s;++i)
    {
        if(input1[i] != ',' && input1[i] != '}'&& input1[i] != '{')
            {
                for(int j =0 ; j<26 ; ++j)
                {
                    if(input1[i] == alph[j])
                    {
                        counter ++ ;
                        alph[j] = '0' ;

                    }
                }
            }
    }
    cout <<  counter ;
*********************************************************************************
    puzzles problem
     int n , x , diff =1004;
    int arr[1000] ;
    cin >> n >> x ;
    for(int i =0;i<x ;++i)
    {
        cin >> arr[i] ;
    }
    sort(arr,arr+x);
    if(x != n){
    for(int i =0 ; i<x-n+1;++i)
    {
        //cout << (arr[i+n-1]-arr[i]) << "    " ;
        if(diff >= (arr[i+n-1]-arr[i]))
        {
            diff = (arr[i+n-1]-arr[i]) ;
        }
    }}else
    {cout << (arr[n-1]-arr[0]) ; return 0 ;}
   cout << diff ;
*********************************************************************************
    expersions problem
    int a , b , c ,biggest=0;
    int x[6];
    cin >> a >> b >> c ;
    x[0] = a*b*c;
    x[1] = a+b+c ;
    x[2] =a*(b+c);
    x[3]=a+(b*c);
    x[4]=(a+b)*c;
    x[5]=(a*b)+c;
    for(int i =0;i<6;++i)
    {
        if(biggest<x[i])
        {
            biggest=x[i];
        }
    }
   cout <<biggest<<endl;
*********************************************************************************
    games problem
    int x , games = 0 ;
    int home[30] , away[30];
    cin >> x ;
    for(int i =0;i<x;++i)
        cin>>home[i]>>away[i];
    for(int i =0 ; i <x ; ++i )
    {
        for(int j=0;j<x;++j)
            if(home[i]==away[j])
            games++;
    }
    cout << games;
*********************************************************************************
    game with sticks problem
     int x ,y,smallest=0;
    cin >> x >> y ;
    if(x>=y)
        smallest=y;
    else
        smallest=x;
    if(smallest%2==0)
        cout<<"Malvika";
    else
        cout<<"Akshat";

*********************************************************************************
    soldier and banans problem

    long long k , n , w ;
   cin >> k >> n >> w ;
   for(int i =1 ; i <= w ; ++i)
   {
       n -= i*k;
   }
   if(n<=0)
   cout << abs(n) ;
   else
    cout << "0" ;
*********************************************************************************
    geroge and accommadition problem
     int x , helper1 , helper2 , counter = 0;
   cin >> x ;
   for(int i =0 ; i<x;++i)
   {
       cin >> helper1 >> helper2 ;
       if(abs(helper1-helper2) >= 2 )
        counter ++ ;
   }
    cout << counter ;
*********************************************************************************
    combination lock problem

    int x , helper1 =0,helper2=0,counter =0;
    char input1[1000],input2[1000] ;
    int arr1[1000] , arr2[1000];
    cin >>x;
    cin >> input1 ;
    cin >> input2 ;
    for(int i =0;i<x;++i)
    {
        arr1[i] = input1[i] - 48 ;
    }
    for(int i =0;i<x;++i)
    {
        arr2[i] = input2[i] - 48 ;
    }
    for(int i =0;i<x;++i)
    {
        helper1 = abs(arr1[i]-arr2[i]) ;
        helper2 = 10 - helper1 ;
        if(helper1>=helper2)
            counter += helper2 ;
        else
            counter += helper1;
        }
        cout << counter ;
*********************************************************************************
     presnets problem

        int x , n ;
        int arr[1011] ;
        cin >> n ;
        for(int i = 1 ; i<=n;++i)
        {
            cin >> x;
            arr[x] = i ;
        }
        for(int i =0;i<n;++i)
        cout << arr[i+1] << " ";
*********************************************************************************

        lucky devision problem

    int n,step1 =0;
    cin >> n;
    int arr[14] = {4,44,47,74,444,447,474,477,7,77,777,744,774,747};
    for(int i = 0 ; i < 14 ; ++i)
    {        if(arr[i] == n )
        {cout << "YES" << endl; return 0;}
    }
    for(int i = 0 ; i < 14 ; ++i)
    {
        if(n>arr[i])
        {   if (n % arr[i]==0)
              {cout << "YES" << endl;return 0;}
}}
    cout << "NO" <<endl;


**********************************************************


  int n , counter  =0 , x=0 , y=0;
    string s ;
    cin >> n ;
    cin >> s ;
    for(int i =0 ; i <=n ; ++i)
    {
        if(s[i] == 'R')
        x++;
        else if(s[i] == 'U')
        y++;
       //    cout << x << " " << y <<" "<<i<<"       "  ;
        if(x==y){
          if (s[i] == 'U' && s[i] == s[i+1] )
          {
            counter ++ ;
            i++;
            y++;
          }  else if (s[i] == 'R' && s[i] == s[i+1])
          {
            counter ++ ;
            i++;
            x++;

          }


            }
    }
//cout << endl;
cout << counter << endl;








************************************************************************************
        chat room problem

    string base = "hello";
    string inputt;
    cin >> inputt;
    int x = inputt.size(),counter = 0,basecounter =0;
    for(int i=0;i<x;++i)
    {
        if(inputt[i] == base[basecounter])
        {
            basecounter++;
            counter++;
        }
    }
    if(counter==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


************************************************************************************

    twins problem

 int x , sum = 0 , sumforcounter =0 , counter =0 ;
    int arr[100];
    cin >> x;
    for(int i = 0 ; i<x ; ++i)
    {
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    sum = sum / 2 ;
    sort(arr,arr+x);
    int o = x-1 ;
    for(int i = 0 ; i < x ; i++)
    {
       sumforcounter += arr[o-i] ;
       counter ++ ;
       if (sumforcounter > sum)
       {
           break;
       }

    }
    cout << counter << endl;
***********************************************************************************
    fafa problem 1


    int n  , counter =0 ,helper = 0;
    cin >> n ;
    for ( int i =1 ; i < n ; ++i)
    {
        helper = n - i ;
        //cout << helper << endl;
       // cout << i << endl;
        if (helper % i == 0)
        counter++ ;
    }
    cout << counter ;




************************************************************************************
    DUBSTEP PROBLEM

    char s[200] ;
    cin >> s ;
    int x = strlen(s);
    for(int i =0 ; i < x ; ++i)
    {
        if(s[i] == 'W' && s[i+1] =='U' && s[i+2] =='B')
        i += 2 ;
        else{
        if(s[i+1] != 'W' || s[i+2] != 'U'|| s[i+3] != 'B')
        cout << s[i]; //,cout << s[i+1] << "::" << s[i+2] << "::" << s[i+3] << "::" << endl;
        else if (s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B')
        cout << s[i] << " " ;
    }}


************************************************************************************
    convientent for everybody problem
    need to be fixed

    long long n , s, f ,sum=0,biggest = 0, clock = 0 ;
    int ppl[100001];
    cin >> n ;
    for (int i =1 ; i < n ; ++i)
    cin >> ppl[i];
    cin >> s >> f ;
    for(int i = 1 ; i < n ; ++i)
    {
        if(s <= i && f > i )
        {
            sum += ppl[i] ;
            if(sum > biggest)
            {
                biggest = biggest ;
                clock = i ;
            }
        }
    }
    cout << clock << endl ;

******************************************
    hamster farm problem

    int n ,input1[5000];
    cin >> n;
    for (int i =0 ; i < n ; ++i)
    {
        cin >> input1[i];
    }
    //sort(input1,input1+n);
    //  for (int i =0 ; i < n; ++i)
     // cout << input1[i] << "  " ;
     // cout << endl;
    for (int i =0 ; i < n-2 ; ++i)
    {   for(int j =i+1;j<n-1 ; ++j)
        {
        if(input1[i] != input1[j] &&input1[i]!= input1[j+1] && input1[j] != input1[j+1])
        {
            if(input1[i] != i+1 &&(j+1+1)!= input1[j+1] && input1[j] != j+1){
            cout << "YES" << endl;
            cout << input1[i] << "  " << input1[j] << " " <<input1[j+1] << endl;
            return 0;
        }}
    }}
    cout << "NO" << endl;

******************************************
    love triangle problem
    fail need to be fixed

    long long n , k ,inputt ,x = 0,bigger =0 , stand = 0 , index = 0 , capcatiy =0 ;
    cin >> n >> k ;
    for (int i = 0 ; i < k ; ++i)
    {
        cin >> inputt ;
        if(inputt <= n ){
        x = n / inputt ;
        bigger = x * inputt ;
        if(bigger > stand)
        {
            stand = bigger ;
            index = i ;
            capcatiy = x ;
        }

    }}

    cout << index+1 << " " << capcatiy <<endl;
******************************************
    math table problem

    int n , x , counter = 0 , helper ;
    cin >> n >> x ;
    for(int i =1;i<=n;++i)
    {
        if(x % i == 0)
        {
            helper = x / i ;
            if(helper <= n )
            {
                counter ++ ;
            }
        }

    }
    cout << counter << endl;
******************************************
    failing contest
    need to be fixed + the first problem

  int n2sm(int n )
{

    int helper = n,d[7];
  //  if(n>10){
    while(n>=10){
    d[0] = n % 10 ;
    //helper = n/10 ;
    //cout << d[0] << "  " ;
    d[1] = helper / 10 % 10 ;
    //cout << d[1] << "  " ;
   // helper = n/100 ;
    d[2] = helper/ 100 % 10 ;
   // helper = n/1000 ;
    //cout << d[2] << "  " ;
    d[3] = helper /1000% 10 ;
   // helper = n/10000 ;
    //cout << d[3] << "  " ;
    d[4] = helper /10000% 10 ;
    //cout << d[4] << "  " ;
   // helper = n/100000 ;
    d[5] = helper /10000 % 10 ;
   // helper = n/1000000 ;
    d[6] = helper /100000 % 10 ;
    //cout << d[5] << "  " ;
     n = 1;
    for(int i = 0 ; i < 7 ; ++i)
    {
        if(d[i] > 0)
        n *= d[i] ;
    }
    }
  //  }
//
    return n ;
}


    int n ;
    long long counter = 0 ;
    int l , r , k ;
    cin >> n ;
    for(int i = 0 ; i < n ; ++i)
    {

        cin >> l >> r >> k ;
       for(int j = min(l,r) ; j <= max(l,r) ; ++j)
        {
         // cout << n2sm(j) << "  ";
            if(k == n2sm(j))
            {
            counter++;
            //cout << j << endl;
            }
        }
        cout <<counter << endl;
        counter = 0;
    }
*****************************************
    xenia and ringroads problem

    long long counter=0 ;
    int  index , current =1 , tasks ,houses;
    cin >> houses >> tasks ;
    for(int i =0 ;i<tasks ; ++i)
    {
        cin >> index ;
        if (current > index )
        {
            counter += (houses - current) ;
            counter += index ;
            current = index ;
        }else if (current < index)
        {
            counter += (index - current) ;
            current = index ;
        }
    }
    cout << counter << endl ;


******************************************
        system of equations problem

    int n , m ,helper=0,counter =0;
    cin >> n >> m ;
    int maxx = max(n,m);
    int minn = min(n,m);
    //cout << maxx << " " << minn << endl;
    //cout << maxx << endl;
    for(int i = 0 ; i <= maxx ; ++i)
    {
        helper = (maxx-i*i) ;
        if (helper < 0 )
            break;

        if(i+helper * helper  == minn )
             counter ++ ;
    }
    cout << counter << endl;


         ******************************************
     sale problem
 int n , m ;
    cin >> n >> m ;
    int *arr = new int [n] ;
    for(int i = 0 ; i<n;++i)
    cin >> arr[i];
    sort(arr, arr+n);
    int sum = 0 ;
    for(int i =0 ; i< m ;++i)
    {
        if(arr[i] < 0)
        {
            sum += abs(arr[i]) ;
        }

    }

    cout << sum << endl;

 ******************************************
        football problem

    int n ,fcounter = 1 , scounter =0 ;
    cin >> n ;
    string finput , sinput , g;
    cin >> finput ;
    for (int i =1;i<n;++i)
    {
        cin >> g;
        if (g == finput)
        fcounter++;
        else
        {
        sinput = g;
        scounter++;
    }}
    if(fcounter>scounter)
    cout << finput << endl;
    else
    cout << sinput << endl;

******************************************
    translation problem
        shitty submit no idea wtf is happening
        string input1,input2 ;
    char reverser[100] ;
    cin >> input1;
    cin >> input2 ;
    int x=input1.size() ;
    //cout << x << endl;
    int o =  x- 1 ;
    for(int i = 0 ; i < x ; ++i)
    {
       // cout << i << "  " << o-i << endl;
        reverser[i] = input1[o-i];
    }
    //cout << reverser << endl;
    if (reverser == input2 )
         cout << "YES" << endl;
    else
        cout << "NO" <<endl;
 ****************************************
    magical nubmer probelm

    char inputt[30] ;
    bool found = true ;
    cin >> inputt;
    int x = strlen(inputt) ;
    //cout << x << endl;
    for(int i =0 ; i<x ; i++)
    {
        if(inputt[i]=='1' && inputt[i+1] == '4' && inputt[i+2] == '4')
        {
            i += 2;
        }else if (inputt[i]=='1' && inputt[i+1] == '4')
        {
            i += 1 ;
        }else if(inputt[i]=='1')
        {
            continue ;
        }else
        {
            cout << "NO" << endl;
            found = false ;
            break;
        }
    }
    if(found)
    cout << "YES" << endl;


******************************************
 ******************************************
    ms2lt el gendy mesh faker 2smha eh
    need to be submitted


    int debt=0 ;
    int a , b , c;
   int n , m;
    cin >> n >> m ;
    int arr[100005];
    for(int i = 0 ; i < m ; i++)
    {
        arr[a] -= c;
        arr[b] += c;
    }
    for (int i =1 ; i < m ; ++i)
    {
        if (arr[i]<0)
        {
            debt += abs(arr[i]);


        }

    }

    cout <<debt<< endl;



******************************************
    hexdecimal therom

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





 ******************************************
    small elephent prolly problem

    int n , found = 0,index = 0,smallest = pow(10,9) +100 , arr;
    cin >> n ;
    for (int i =0 ; i < n ; ++i )
    {
        cin >> arr ;
        if(arr < smallest )
            {
            smallest= arr;
            index = i ;
            }
        else if (arr == smallest)
            {
                 found=arr ;
                }
    }
    if(found==smallest)
    cout << "Still Rozdil" << endl;
    else
    cout << index +1 << endl;


******************************************
    even odds problem

    long long n , k ,help = 0;
    cin >> n >> k ;
    if(n % 2 == 0)
    {
        help=n/2;
        if(k<=help)
            cout << 2*(k-1)+1 << endl;
        else
            cout<< 2*(k-help) << endl;
    }else
    {
        help=(n/2)+1;
        if(k<=help)
            cout << 2*(k-1)+1 <<endl;
        else
            cout << 2*(k-help) <<endl;
    }
 ******************************************
    reconnosis shity problem


    int n , input[100] ;
    cin >> n ;
    for(int i =0 ; i<n ; ++i)
        cin>>input[i];
        //base case
    int no1 = input[0] , no2 = input[n-1] , diff = abs(no1-no2) , index1 = 0 , index2 = n-1 ;
    //looping over elements
   // cout << diff ;
    for(int i =0;i<n ; ++i)
    {
        if(diff==0)
            break;
        no1=input[i];
        no2=input[i+1];
        if(diff > abs(no1 - no2))
            {
                index1=i;
                index2=i+1;
                diff=abs(no1-no2);
                //cout << "rlly " << endl;
            }

    }
           cout << index1+1 << " " << index2+1 << endl;


******************************************

 parrelle piped problem


 int p1 , p2 , p3 ;
    cin >> p1 >> p2 >> p3 ;
    int x=sqrt((p1*p2)/p3) , y=sqrt((p1*p3) / p2) , z = sqrt((p3*p2) /p1) ;
    int outt=4*(x+y+z) ;
    cout << outt << endl;

 ******************************************
    peter and the book problem

    int n ,weekindex =0;
    int week[7];
    cin >> n;
    for(int i =0 ; i<7 ; ++i)
        cin >> week[i] ;

    while(n > 0)
    {
        for(int i=0;i<7;i++)
        {
            n -= week[i];
            if(n<=0)
            {
                weekindex = i;
                break;
            }
        }
    }
    cout << weekindex+1  << endl;

******************************************
Jzzhu and Children problem


int x,help=0,sub;
    cin>>x;
    vector<int> v(x) ;
    vector<int> org(x) ;
    cin >> sub ;
    for(int i=0;i<x;++i)
    {
        cin >> org[i];
        v[i] = i;
    }
    while(help != 1)
    {
     if(x==1)
     {
     break;
    }  org[0] = org[0] - sub;
        if(org[0] <= 0)
        {
            org.erase(org.begin());
            v.erase(v.begin());
        }else{
            org.push_back(org[0]);
            v.push_back(v[0]);
            org.erase(org.begin());
            v.erase(v.begin());

        }

        help=int(v.size());

    }
    cout << v[0]+1 << endl;
 ******************************************

    dima and his friend probelm


 int n ,answer=0,x , sum=0;
    cin >> n;
    for (int i =0;i<n;++i)
    {
    cin >> x;
    sum += x;
    }
    for(int i =1;i<6 ;++i)
    {
        if((sum+i) % (n+1) != 1)
        answer++;
    }
    cout << answer << endl;

******************************************

******************************************
petya and strings problem


    string first , second;
    cin>>first ;
    cin>>second ;
    int    x =first.size() ;
    for (int i =0 ; i < x ; i++)
    {
    first[i] = tolower(first[i]);
    second[i]=tolower(second[i]);

    }
    if (first > second)
        cout << "1" << endl;
    else if (first< second)
    cout << "-1" << endl;
        else if (first==second)
    cout <<"0" <<endl;




******************************************
    Team probelm

    int n ,u1 , u2 ,u3 ,out=0 ,sum=0;
    cin >> n ;
    for (int i=0;i<n;++i)
    {
        cin>>u1>>u2>>u3;
        sum=u1+u2+u3;
        if (sum >=2) out++;
    }
    cout << out << endl;


 ******************************************


        effective approche (inqueue)



******************************************

    MaratonIME   educates
	int cars=0, x  ;
	long long sum =0;
	int in ;
	cin >> x ;

	for (int i =0 ; i < x ; ++i)
	{
	cin >> in ;
	sum += in ;
	}
	cars = (sum+4) /5 ;
	cout << cars << endl;


 ******************************************

MaratonIME does a competition contest

    int x1,x2,x3,x4, n ,sum1=0,sum2=0,sum3=0,sum4=0;
    cin >> n;
    while(1)
    {
        cin >> x1 ;
        sum1 += x1 ;
        n--;
        if(n==0) break;
        cin >> x2 ;
        sum2 += x2 ;
        n--;
        if(n==0) break;
        cin >> x3 ;
        sum3 += x3 ;
        n--;
        if(n==0) break;
        cin >> x4 ;
        sum4 += x4 ;
        n--;
        if(n==0) break;
    }
    if (sum1 >= sum2 && sum1 >= sum3 && sum1 >= sum4) cout << "A" ;
    else if (sum2 >= sum1 && sum2 >= sum3 && sum2 >= sum4) cout << "B" ;
    else if (sum3 >= sum2 && sum3 >= sum1 && sum3 >= sum4) cout << "C" ;
    else if (sum4 >= sum2 && sum4 >= sum3 && sum4 >= sum1) cout << "D" ;

******************************************
        divide fairly contest

    int t , x1,x2 ,sum=0;
    cin >> t ;
    for (int i = 0;i<t ;++i)
    {
        cin >> x1 >>x2 ;
        sum=x1+x2;
        if(x1==x2)
        {
            cout << "Ok" << endl;
        }
        else
        {
            if(sum %2==0)
            {
                cout << sum/2 << " " << sum/2 << endl;
            }
            else
            {
                if (x1-1==x2 || x2-1==x1)
                {
                    cout << "Ok" << endl;
                }else
                {
                cout << sum/2 << " " << ((sum/2)+1) << endl;
                }
            }
        }
    }

 ******************************************
    russo mozerfker contest

    double xr ,yr , xw ,yw  ;
    cin >> xr >>yr >>xw >> yw ;
    double russo = sqrt(xr*xr+yr*yr);
    double wil = sqrt(xw*xw+yw*yw);

    if(russo < wil) cout << "Russo" << endl;
    else if (russo > wil) cout << "Wil" << endl;
    else cout << "Empate" << endl;



******************************************

MaratonIME stacks popcorn buckets  contest

    long long  n ;
    long long sum = 0;
    cin >> n ;
    sum = (n*(n-1)/2) +1;
    cout << sum << endl;


 ******************************************
    effective approch problem
    bad solution with run time error mozrfker


    -----------------------
    2 cases missing

    int n ,myarr[100001] ,frontt=0 , backward=0 , help=0,help2=0;
    cin >> n;
    int *arr = new int [n] ;
    for (int i =0;i<n;++i)
    {
    cin >> arr[i];
    myarr[arr[i]] = arr[i] ;
    }
    int m , check;
    cin >> m;
    while (m != 0)
    {
        cin >> check ;
        help = myarr[check] ;
        frontt += help ;
        help2 = n + 1 - help ;
        backward += help2 ;
        help2=0;
        help=0;
        m--;
    }
    cout << frontt << " " << backward << endl;





******************************************
    boy and girl problem
    char in[100] ;
    string check ;
    cin >> in;
    int x = strlen(in);
    check.append(1u,in[0]);
    int z = check.size();
    for (int i =1;i<x;++i)
    {
        bool found = true ;
        for (int j=0;j<z ; j++)
        {
            if(in[i] == check[j])
            {
                found = false ;
            }
        }
        if (found)
        {
        check.append(1u,in[i]);
        z=check.size();
        }
    }
    int output = check.size();
    if(output % 2 == 1) cout << "IGNORE HIM!" << endl ;
    else cout << "CHAT WITH HER!" << endl;
    return 0;

******************************************
    bit++ problem
    int n , x=0 ;
    char in[3];
    cin >> n ;
    for (int i =0 ; i<n;++i)
    {
        cin >> in;
        if (in[0] == '+' || in[2] == '+') x=x+1;
        else
        x= x - 1;
        cout << x << endl;
    }
    cout << x << endl;

******************************************
  softdrinks problem

    int n,k,l,c,d,p,nl,np,drinks,lemons,salt;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    drinks = (l*k) / (nl*n) ;
    lemons = (c*d) / n ;
    salt = p /(np*n) ;
    if (drinks <= lemons && drinks <= salt) cout << drinks ;
    else if(lemons <= drinks && lemons <= salt) cout << lemons ;
    else cout << salt ;

    return 0;
***********************************
    HQ9+ problem
  char s[100] ;
  cin >> s ;
int  x = strlen(s);
  bool breakk = false ;
  for (int i = 0 ; i < x ; ++i)
  {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
    {
        breakk = true ;
    }
  }
  if (breakk)
  cout << "YES";
  else
  cout << "NO";
***********************************************
 Helpfulmath problem
  char s[100] ;
    char a[2] = {'d'};
    cin >> s ;
     int x =strlen(s) ;
    for (int i = 0 ; i < x ; i += 2)
    {
        for (int j = i ; j < x ; j += 2)
    {
            if(s[i] >= s[j])
            {
                a[1] = s[i] ;
                s[i] = s[j] ;
                s[j] = a[1] ;
            }
    }
    }
    cout << s <<endl;


    ***********************************************
    way too long words


        int x ;
        char s[100];
        cin >> x;
        for(int i = 0 ; i < x ; ++i)
        {
            cin >> s ;
            int o = strlen(s) ;
            if(o>10)
            cout << s[0] << o-2 << s[o-1] << endl;
            else
            cout << s << endl;

        }

        **********************************************

        watermelon problem

        int x ;
        cin >> x ;
        if(x>2&& x%2==0)
        cout << "YES" ;
        else
        cout << "NO";

        **********************************************
        string task problem

        char s[100] ;
        cin >> s ;
        int x = strlen(s) ;
        for(int i = 0;i<x;++i)
        {
        s[i]=tolower(s[i]);
        if(s[i]!= 'a' &&s[i]!= 'o' &&s[i]!= 'u' &&s[i]!= 'e' &&s[i]!= 'y' &&s[i] != 'i' )
            {cout << "." ;
                cout << s[i] ;
        }}

            **********************************************

*/
