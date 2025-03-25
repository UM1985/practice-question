// problem 1

// #include<iostream>
// using namespace std;
// int main(){

//     int a =10;
//     int b =20;

//     int c;

//     c =a;
//     a=b;
//     b=c;

//     cout<<"A = "<<a<<endl;
//     cout<<"B = "<<b;
// }

// problem 2

// #include<iostream>
// using namespace std;
// int main(){

//     int a =10;
//     int b =20;

//    swap(a,b);

//     cout<<"A = "<<a<<endl;
//     cout<<"B = "<<b;
// }

// problem 3

// #include<iostream>
// using namespace std;
// int main(){

//     double amount = 45.34;

//     int r = amount;  // stored  45
//     int   p = (amount -r)*100;  //stored  34   45.34 - 45 = .34 *100 =34

//     cout<<r<< " Rupees"<<endl;
//     cout<<p<< " paisa"<<endl;

// }

// problem 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 296, sum = 0;

//     while (num > 0)
//     {
//         int lastd = num % 10; // 231 %10 = 1 , 23 %10 =3 , 2%10 = 2
//         sum = sum + lastd; // 0+1 , 1+3 , 4+2 =6
//         num = num / 10; // 231/10 = 23 ,  23/10=  2, 2/10 =0
//     }

//     cout<<"Sum of given Number is "<< sum;
// }

// problem 5

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 8332, sum =0, firstd;

//     int lastd= num%10;
//     while(num >10){
//         num = num /10;//  833 , 83,8
//     }
//     firstd = num;

//      sum =  firstd +lastd;

//      cout<<"Sum of First digit and last digit is "<<sum;

// }