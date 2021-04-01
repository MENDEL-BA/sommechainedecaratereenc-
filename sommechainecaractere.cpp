#include <iostream>
#include <string>
#include <cstring>

using std::cout; using std::endl;
using std::cin; using std::string;
using namespace std;

int strAdd(char s[]) {
  
    //char s[] = "32      +       44";
    char mot1[50], mot2[50], mot3[50];
 
    sscanf(s, "%s %s %s", mot1, mot2, mot3);
    printf("mes mots %s %s %s\n", mot1, mot2, mot3);
     int x = stoi(mot1);
     int y = stoi(mot3);
     int resultat;
    if(strcmp(mot2,"+") ==0){
       resultat = x +y;
    } else {
      cout << "\n Operation non permise, sauf l'addition est valable" ;
    }
    
    return resultat;

}

int main() {
    // Write C++ code here
    int re = strAdd("  23     +       2  ");
    cout << re ;

    return 0;
}
