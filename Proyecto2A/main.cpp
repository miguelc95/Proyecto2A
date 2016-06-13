//
//  main.cpp
//  Proyecto2A
//
//  Created by Miguel Cuellar on 4/13/16.
//   Equipo:Miguel Cuellar Carmelo Ramirez.
//
#include <iostream>
#include <cmath>
using namespace std;
string uno,dos;


int menor( int x, int y){
    if (x==0 || y==0) return 0;
  return  (uno[x-1] == dos[y-1]) ? (1 + menor(x-1, y-1)) : (max(menor(x, y-1), menor(x-1, y)));
}
int main(){
    int casos;
    cin>>casos;
    for (int ix=1; ix<=casos; ix++) {
        cin>>uno>>dos;
    unsigned int m = uno.length();
   unsigned int n = dos.length();
    cout<<"Case "<<ix<<": "<<menor(m,n)<<endl;
    }
    return 0;
}
