#include<iostream>
using namespace std;
#include<cmath>

/*
void masala1(int a){
    int s;
    s = a*a;
    cout << s << endl;
}

int main(){
    int b;
    cin >> b;
    
    masala1(b);
}
*/

/*
void masala2(double a, double b){
    int s;
    s = (a * b)/2;
    cout << s << endl;
}

int main(){
    double d, e;
    cin >> d >> e;
    
    masala2(d, e);
}
*/

/*
void masala3(int a){
    int sum = 0;
    while(a > 0){
        sum += a % 10;
        a /= 10;
    }
    cout << sum << endl;
}

int main(){
    int c;
    cin >> c;
    
    masala3(c);
}
*/

/*
void masala4(int a){
    int count;
    
    while(a > 0){
        a /= 10;
        count++;
    }
    cout << count << endl;
}
int main(){
    int s;
    cin >> s;
    
    masala4(s);
}
*/

/*
void masala5(int a){
    int sum = 0;
    int b, c, d, e;  
    
    b = a % 10;
    c = a / 10 % 10;
    d = a / 100 % 10;
    e = a / 1000;
    
    if(b > c && b > d && b > e){
        cout << "eng katta raqam: " << b << endl;
    }else if(c > b && c > d && c > e){
        cout << "eng katta raqam: " << c << endl;
    }else if(d > b && c < d && d > e){
        cout << "eng katta raqam: " << d << endl;
    }else if(e > b && e > d && c < e){
        cout << "eng katta raqam: " << e << endl;
    }
}    
int main(){
    int g;
   cout << "4 xonali son kiriting: "; cin >> g;
   
   masala5(g);
    
    
}

*/

/*
void masala6(int n){
    int sum = 0;
    
    for (int i = 0; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
    
}

int main(){
    int s;
    cin >> s;
    masala6(s);
}
*/

/*
void masala7(int a){
    int b = 1;
    for(int i = 1; i <= a; i++){    
        b *= i;
    }
    cout << a << "! = " << b << endl;
}

int main(){
    int s;
    cin >> s;
    masala7(s);
}
*/

/*
void masala8(int a, int b){
    int daraja = pow(a,b);
    cout << a << " ning " << b << " - darajasi " << daraja << " ga teng" << endl;
}
int main(){
    int s, d;
    cout << "son kiriting: "; cin >> s;
    cout << "daraja kiriting: "; cin >> d;
    masala8(s, d);
}
*/

/*
int masala9(int n){
    if(n == 0) return 0;   
    if(n == 1) return 1;   
    return masala9(n - 1) + masala9(n - 2);
}

int main(){
    int s;
    cin >> s;
    cout << masala9(s) << endl;
}
*/

/*
int masala10(int a, int b){
    int sum;
    return sum = (a+b)/2;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << masala10(a, b) << endl;
}
*/

/*
void masala11(int n){
    int a = 0;
    
    for(int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    
}

int main(){
    int n;
    cin >> n;
    masala11(n);
}
*/

int masala12(int n, int natija = 0){
    if(n == 0) return natija;                      // to'xtash sharti
    return masala12(n / 10, natija * 10 + n % 10);  // rekursiv chaqiruv
}

int main(){
    int n;
    cin >> n;
    cout << masala12(n) << endl;
}