#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    // char a[]="abcd";
    // string s(a);
    // reverse(s.begin(),s.end());

    // scanf("%[^\n]s",str);

    printf("start now\n");
    char a[40];
    scanf("%[^\n]%*c",a);
    printf("%s",a);
  
return 0;
}
//   *important
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     char *s;
//     s = malloc(1024 * sizeof(char));
//     scanf("%[^\n]", s);
//     s = realloc(s, strlen(s) + 1);
//     //Write your logic to print the tokens of the sentence here.
//     return 0;




// class Solution {
// public:
//     void reverseString(vector <char> s) {
//     string st(s.begin(),s.end());
//     reverse(st.begin(),st.end());
//     copy(st.begin(), st.end(),back_inserter(s));

//     }
// };