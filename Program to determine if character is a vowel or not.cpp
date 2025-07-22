/* Name - Mayank Yadav
   PRN - 24070123060
   ENTC A3 */
#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character:";
    cin >> c;
    
    if(c=='a'|c=='e'|c=='i'|c=='o'|c=='u'|c=='A'|c=='E'|c=='I'|c=='O'|c=='U'){
        cout << "The character is a vowel.";
    }
    else{
        cout << "The character is a consonent.";
    }
    

    return 0;
}


/* OUTPUT
Enter a character:b
The character is a consonent. */
