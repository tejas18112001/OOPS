#include<bits/stdc++.h>
using namespace std ;

bool Check(string str) {
    unordered_map<char , int>mp ;
    for(auto i: str) {
        mp[i]++ ;
    }
    
    int cnt = 0 ;
    for(auto i : str) {
        if(mp[i]%2 != 0)
        {
           cnt++ ;
        }
    }

    if( cnt == 1 && str.size()%2 != 0) {
        return 1 ; 
    }

    if( cnt == 0 && str.size()%2 == 0 ) {
        return 1 ;
    }




   

    return 0 ;
}
int main() {

    string str ;
    str = "geeksgeek" ;
    cout<<Check(str) <<"\n";

    return 0; 
}

