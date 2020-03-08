#include <iostream>

using namespace std;

long int silnia(long int a){
    long int b=1,c=1;
    while(b<=a){
        c=c*b;
        b++;
    }
    return c;

}
int NWD(int a, int b){
    int c=1;
    while (b != 0){
        c = a%b;
        a=b;
        c=a;
    }

}
long int z_pow(int n , int k){
    return silnia(k+n-1)/silnia(k)*silnia(n-1);
}
long int bez_pow(int n, int k){
    return silnia(n)/silnia(k)*silnia(n-k);
}
int przedzial(int a, int b, int x){
    for(int i = a; i<=b; i++){
        if(i%x==0) cout << i << endl;
    }
}
int przedzdom(int x){
    for(int i = 1; i<=1000; i++){
        if(i%x==0) cout << i << endl;
    }
}
int fib(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    if (n>=2) return fib(n-1)+fib(n-2);
}
unsigned int reka(int n){
    if(n==0) return 1;
    if(n>=1) return 2*reka(n-1)+5;
}
unsigned int rekurencja(unsigned int n){
    if(n==0 || n==1) return 1;
    if(n%2==0) return rekurencja(n-1)+n;
    else return rekurencja(n-1)*n;

}
unsigned int rekurencjaa(unsigned int n){
    if(n==0 || n==1 || n==2) return 1;
    if(n%3==0) return rekurencjaa(n-1)+rekurencjaa(n-2);
    if(n%3==1) return 5*rekurencjaa(n-1)+4;
    else return rekurencjaa(n-1);
}

int main()
{
  /*  cout << "Podaj silnie ktora chcesz obliczyc: " ; long int a; cin >> a;
    cout << silnia(a) << endl;
  */
  /*  cout << "Podaj liczbe do funkcji Euklidesa: "; int a,b; cin >> a >> b;
      cout << NWD(a,b) << endl;
  */
  /*  cout << "Podaj liczbe n i k:"; int n,k; cin >> n >> k;
    cout << z_pow(n, k) << endl;
    cout << bez_pow(n, k) << endl;
  */
  /*  cout << "Podaj przedzial liczb:"; int a,b; cin >> a >> b;
    cout << "Podaj swoja liczbe do podzialu: "; int x; cin >> x;
    cout << "Liczby z twojego przedzialu podzielne przez " << x << " to: " << przedzial(a,b,x) << endl;
  */
  /*  cout << "Przez jaka liczbe chcesz dzielic przedzial [1;1000]";int x; cin >> x;
    cout << przedzdom(x)<<endl;
   */
   /* int zlicz=0;
    for(int i=1; i<=9; i++){
        for(int j=0; j<=9; j++){
            for(int k=0; k<=9; k++){
                if(k!=j && k!=i && j!=i){
                zlicz++;
                cout << i << j << k << ",";}
            }

        }
    }
    cout << "\n"<< zlicz << endl;
    */

    /*cout << "Podaj ktora liczbe Fibonaciego chcesz obliczyc: "; int n; cin >> n;
    cout << fib(n) << endl;
    */
    /*
    cout << "Podaj liczbe a: "; int n; cin >> n;
    cout << reka(n) << endl;
    */
    /*cout << "Podaj liczbe n: "; int n; cin >> n;
    cout << rekurencja(n) << endl;
    */
    cout << "Podaj liczbe n: "; int n; cin >> n;
    cout << rekurencjaa(n) << endl;


    return 0;
}
