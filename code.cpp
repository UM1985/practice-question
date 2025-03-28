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
//     while(num >10){lastd
//         num = num /10;//  833 , 83,8
//     }
//     firstd = num;

//      sum =  firstd +lastd;

//      cout<<"Sum of First digit and last digit is "<<sum;

// }

// problem 6

// #include<iostream>
// using namespace std;
// int main(){
//     int num =8243, temp =num,sum =0, lastdigit;

//     int lastd= num %10;   //lastd = 6

//     int firstd = num; // firstd =4536
//     while (firstd >10){
//         firstd = firstd/10;// yemp /10 = 453 , 45,4  ,  firstd = 4
//     }

//     while(temp>0 ){ // temp =4536

//         lastdigit = temp%10; //lastdigit = 6 ,  3

//         if(lastdigit != lastd && lastdigit != firstd){
//              sum = sum + lastdigit;
//         }

//         temp = temp/10;  // yemp /10 = 453 , 45,4 ,0

//     }

//     cout<<sum ;

// }

// // problem 7

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 6345;
//     int temp = num;

//     int rev = 0;
//     int lastdigit;

//     while (temp > 0)
//     {
//         lastdigit = temp % 10;      // 2 , 3 , 5
//         rev = rev * 10 + lastdigit; // 0 0+2=2,   20 +3 = 23, 23*10 = 230+ 5 =235
//         temp = temp / 10;           // 53 , 5 , 0
//     }

//     cout << rev;
// }

// // problem 8  //

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 454;
//     int temp = num;

//     int rev = 0;
//     int lastdigit;

//     while (temp > 0)
//     {
//         lastdigit = temp % 10;      // 2 , 3 , 5
//         rev = rev * 10 + lastdigit; // 0 0+2=2,   20 +3 = 23, 23*10 = 230+ 5 =235
//         temp = temp / 10;           // 53 , 5 , 0
//     }

//     cout<<rev<<endl;

//     if(num == rev){
//         cout<<"the given number is palindrome!";
//     }else{
//         cout<<"the given number is not palindrome!";

//     }

// }

// #include<iostream>
// using  namespace std;
// int main(){

// int num =10;

// for(int i = 1 ; i<=10;i++){  // 1 to 10; >=10
//     cout<<num<<" X "<<i<<" = "<<num*i<<endl;
// }

// }

// problem 10

// #include <iostream>
// using namespace std;

// int Sum(int utkarsh)
// {
//     int ld, sum = 0;
//     while (utkarsh > 0)
//     {
//         ld = utkarsh % 10;
//         sum = sum + ld;
//         utkarsh = utkarsh / 10;
//     }
//     return sum;
// }

// void ismagic(int prakash)
// {

//     while (prakash > 9)
//     {
//         prakash = Sum(prakash);
//     }

//     if (prakash == 1)
//     {
//         cout << "The given number is magic number ";
//     }
//     else
//     {
//         cout << "The given number is not magic number ";
//     }
// }

// int main()
// {

//     int num = 433;

//     ismagic(num);
// }

// // problem 11

// #include <iostream>
// using namespace std;
// int main()
// {

//     int num = 10;

//     for (int i = 2; i < num; i++)
//     {

//         if (num % i == 0) // 7 %2 == 1, 7%3 =1 , 7%4 = 3 , 7%5 = 2 ,7%6 = 1 ;
//         {
//             cout << "The given number is not prime number";
//             return 0 ;
//         }
//     }
//     cout << "The given number is prime number";
// }

// problem  13

#include <iostream>
using namespace std;
int main()
{

    int num = 7;

    // 1*2*3*4*5 = 120 = fACTORIAL

    // 5 = 1 , 5 = factor

    int factorial = 1; // 5*1 =5 , 5*0 =0

    for (int i = 1; i <= num; i++)
    {

        factorial = factorial * i; // 1*1 = 1 , 2*1 = 2 , 3*2 = 6, 4*6 = 24 , 5*24 = 120
    }

    cout << factorial;
}