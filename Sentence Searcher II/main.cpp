#include <iostream>
#include <string>
#include <vector>
#include <math.h>
std::string txt =  "I have a dog. I have a log. There is no stopping me now.";
//                  0  1   2  3   4  5   6  7    8     9 10   11     12  13
std::string sentenceSearcher(std::string txt, int n) {
    using namespace std;
    string s,pom;
    vector<int> zdania;//idndekst zdania a w nim na którm indeksie koncze
    vector<string> zd;
    int p = 0;
    for(int i = 0;i < txt.size();i++)
    {
        pom += txt[i];
        if(pom == " ")
            pom = "";
        if(txt[i] == ' ')
            p++;
        else if(txt[i] == '.'){
            zd.push_back(pom);
            pom = "";
            zdania.push_back(p);}
    }
//    for(int i = 0;i < zdania.size();i++)
//        cout << i << " " << zdania[i] << " " << zd[i] << endl;
    if(n < 0)
        n += zdania[zd.size() - 1] + 1;
    for(int  i = 0;i < zdania.size();i++)
    {
        if(n <= zdania[i]){
            s = zd[i];
            break;
        }
    }
    return s;
}
using namespace std;

int main(){
    cout << sentenceSearcher(txt, -10) << endl;
    return 0;
}
