#include<iostream>
using namespace std;

// change str value to reverse
void pelindrom(string& str, int i, int j){

    if(i>j)
        return ;
    swap(str[i], str[j]);
    i++;
    j--;
    pelindrom(str, i, j);
}

bool isPelindrom(string str, int i, int j){
    /* string temp = str;
    pelindrom(str, i, j);
    if(temp == str)
        return true;
    else
        return false; */

    //use another method 

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else
        return isPelindrom(str, i+1, j-1);
}

int main(){
    string str = "madam";

    if(isPelindrom(str, 0, str.length()-1))
        cout<<str<<" is Pelindrom";
    else
        cout<<str<<" is not Pelindrom";

}