#include <iostream>
using namespace std;
long giveSum(long long n){
    string a = to_string(n);
    long sum = 0;
    for (int i=0;i<a.length();i++){
        sum = sum + (n%10);
        n=n/10;
    }
    return sum;
}
long add(long long n)
{
    long l = giveSum(n);
    while (to_string(l).length() >1 && l>0){
        l = giveSum(l);
    }
    return l;
}



int main(){
    long long a = 8888888888888888;
    int b = 9;
    cout<<add(b)<<endl;
    cout<<add(a)<<endl;

}