/*Trim Spaces
Send Feedback
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi*/
what is the main logic.
  >>this question is exact same as push all zero at the end(vas idr we elimate the space at
  the end, for that at '\' at the end,
  use two pinters 1 i for moving forward one for swaping the ith non space 
  charater.
i=0     i
    eg. abc def gp
        0123456789
s=0     s
            while(str[i]!='\0';
    i=0,s=0,check(str[i]!=' ')ya ' '=32 ascii value
           {str[s]=str[i];
           s++}
            i++;
    jab space aye i++ hoga str[s] me kuch ni jayega,asa space elimenate ho jana
    last me jab str[i]='\n' input string end hui space last me aagayi hogi so 
        str[s]='\n' taki last me jo space ayi usko include na kre haam.

    function>>>              
    void trimSpaces(char input[]) {
    int s=0,i=0;
    while(input[i]!='\0')
    {
        if(input[i]!=32)
           {input[s]=input[i];
        s++;}
           i++;
    }
           input[s]='\0';
   
}
      
