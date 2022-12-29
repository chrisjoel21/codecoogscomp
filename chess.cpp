#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <queue>
#include <map>
using namespace  std;
 
const    int    SIZE = 10;
char    MAP[SIZE][SIZE];
int    main(void){

     map<char,int> white;
     map<char,int>  black;

     //Assigning values
     white['Q'] = 9;
     white['R'] = 5;
     white['B'] = 3;
     white['N'] = 3;
     white['P'] = 1;
     white['K'] = 0;
 
     black['q'] = 9;
     black['r'] = 5;
     black['b'] = 3;
     black['n'] = 3;
     black['p'] = 1;
     white['k'] = 0;
 
     int    sum_w,sum_b;
     char    ch;
     sum_w = sum_b = 0;
     for(int i = 0;i < 8;i ++)
         for(int j = 0;j < 8;j ++)
         {
             cin >> ch;
             if(islower(ch))
                 sum_b += black[ch];
             else    if(isupper(ch))
                 sum_w += white[ch];
         }
     if(sum_w > sum_b)
         cout << "White";
     else    if(sum_w < sum_b)
         cout << "Black";
     else
         cout << "Draw";
 
     return    0;
 }