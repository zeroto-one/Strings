// Replace Character
// only function is created here ..
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of String S <= 10^6
// Sample Input :
// abacd
// a x
// Sample Output :
// xbxcd
//Logic kya hen pure sting me traverse kro or find the c1 and replace it with c2 simple.

  void replaceCharacter(char input[], char c1, char c2) {
    //int n =length(input);
    //no need to find the length you can do like below 
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]==c1)
        {
            input[i]=c2;
        }
    }
}
