//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h> 
using namespace std ;
char str[100000] ;
int arr[27] , x ;
 
void answer(int start , int last )
{
    for(int i = 0 ; i < x ; i++)
    {
        if(i >= start && i < last)
        {
            if(str[i] == '?')
                for(int j = 0 ; j < 27 ; j++)
                    if(arr[j] == 0)
                    {
                        str[i] = 'A'+j ;
                        arr[j] = 1 ;
                        break ;
                    }
        }
        else
            if(str[i] == '?') str[i] = 'X' ;
    }
}
   //  trying two pointers solution  
int main()
{
    scanf("%s" , str) ;
    x = strlen(str) ;
    int  mark = 0 , j = 0  , sum = 0  ;
    if(x < 26) return printf("%d" , -1) , 0 ;
    str[x] = '-' ;  // for runtime error  :D
    for(int i = 0 ; i < x+1 ; i++)
    {
        while(j < 26+i)
        {
            if(str[j] == '-') break ;
            if( str[j] == '?' ) mark++ ;
            else
            {
                if(  arr[str[j]-'A'] == 0 )
                {
                    arr[str[j]-'A']++ ;
                    sum++ ;
                }
                else break ;
            }
            j++ ;
        }
        if(mark+sum == 26)
        {
            answer(i,j) ;
            for(int t = 0 ; t < x ; t++) printf("%c" , str[t]) ;
            return 0 ;
        }
        if(str[i] == '?') mark-- ;
        else arr[str[i] - 'A'] = 0 , sum-- ;
    }
    printf("%d" , -1) ;
    return 0 ;
}