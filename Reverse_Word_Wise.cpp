/*Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always*/
main logic of the question 
eg-abc_def_df_qw>>first  wq_fd_fed_cba kar de fir har ak word ko reverse kar de individually.
                         
  code
  int lgt(char  input[])
{
    int l=0;
    for(int i=0;input[i]!='\0';i++)
    {l++;}
    return l;
}

void rev(char input[],int s,int e)
{ 
 while(s<e)
 {	int t=input[s];
     input[s]=input[e];
     input[e]=t;
  s++;
  e--;
 }
}
void reverseStringWordWise(char input[]) {
 
    int s=0,e=lgt(input)-1;
        rev(input,s,e);
  //  cout<<input;
    for(int n=lgt(input), i=0;i<=n;i++)
    {
        if(input[i]==32||input[i]=='\0')
        {
            rev(input,s,i-1);
                s=i+1;
        }
       // cout<<input;
    
        
    }
    

}
#include <iostream>

using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
