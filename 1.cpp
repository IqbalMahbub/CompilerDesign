// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vec vector<int>
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define out(x) cout << x << endl
#define outs(x) cout << x << " "
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nline cout << "\n"
 
#define pi 3.14159265358979323846
#define MOD 1000000007
 const int N=1e9;
int main() {
    #ifndef a
        freopen("1_input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        string input;
        getline(cin, input);
        int n_word=1,n_latter=0,n_digit=0,n_other_charecter=0;
        string latter,digit,other_charecter;
        for(char c:input){
                if(c==' '){
                    n_word++;

                }
                else if(tolower(c)>='a'&& tolower(c)<='z'){
                    n_latter++;
                    latter=latter+c;
                }
                else if(c>='0'&& c<='9'){
                    n_digit++;
                    digit=digit+c;
                }
                else{
                    n_other_charecter++;
                    other_charecter=other_charecter+c;
                }
        }

        cout<<"Number of words :"<<n_word<<endl;
        cout<<"Number of latter :"<<n_latter<<endl;
        cout<<"Number of other_charecter :"<<n_other_charecter<<endl;
        cout<<"Number of digit :"<<n_digit<<endl;
            cout<<endl<<endl;
        cout<<"The latters are:"<<latter<<endl;
        cout<<"The digit are:"<<digit<<endl;
        cout<<"The other_charecter are:"<<other_charecter<<endl;




    return 0;
}