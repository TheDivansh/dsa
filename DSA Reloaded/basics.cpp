#include <bits/stdc++.h>
using namespace std;

// ! Made multiple int main() starts from line 174 before that single int main

// int main() {

    // int x;
    // cin>>x;
    // cout<<"Heyy "<<x<<endl;

    /*
    DataTypes
    int long long float double
    string getline
    char
    */

    // string s1,s2;
    // cin>>s1>>s2;
    // cout<<s1<<" "<<s2;

    // string str;
    // getline(cin,str);
    // cout<<str;

    // char ch;
    // cin>>ch;
    // cout<<ch;
    //only 1 character 
    

    /*Print a program that takes input of age and tell adult or not*/
    
    // int age ;
    // cin>>age;
    // if (age>=18)
    // {
    //     cout<<"Adult";
    // }
    // else
    // {
    //     cout<<"Not Adult";
    // }
    
    /*Take the age from the user and then decide accordingly
    1. If age 18,
    print-> not eligible for job
    2. If age >= 18,
    print-> "eligible for job"
    3. If age >= 55 and age c = 57
    print-> "eligible for job, but retirement soon."
    4. If age > 57
    print-> "retirement time"
    */

//    int age;
//    cin>>age;
//    if (age<18)
//    {
//     cout<<"not eligible for job";
//    }
//    else if (age<=54)
//    {
//     cout<<"eligible for job";
//    }
//    else if (age<=57)
//    {
//     cout<<"eligible for job, but retirement soon";
//    }
// else if (age<=57)
// {
//     cout<<"Eligible";
//     if (age>=55)
//     {
//         cout<<", Retirement soon";
//     }
    
// }
//    else
//    {
//     cout<<" retirement";
//    }

/*
    Take the day no and print the corresponding day
    for 1 print Monday,
    for 2 print Tuesday and so on for 7 print Sunday.
*/

    // int day;
    // cin>>day;
    // switch (day)
    // {
    // case 1:
    //     cout<<"Monday";
    //     break;
    // case 2:
    //     cout<<"Tuesday";
    //     break;
    // case 3:
    //     cout<<"wednesday";
    //     break;
    // case 4:
    //     cout<<"Thursday";
    //     break;
    // case 5:
    //     cout<<"Friday";
    //     break;
    // case 6:
    //     cout<<"Saturday";
    //     break;
    // case 7:
    //     cout<<"Sunday";
    //     break;
    
    // default:
    //     cout<<"invalid";'
    //     break;
    // }


    /*
    Array
    */

    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // arr[3] +=10;
    // arr[3] = 16;
    // cout<<arr[3];

    /*
    2d Array
    */
    // int arr[3][5];
    // arr [1][3] = 78;
    // cout<<arr[1][3];

    /*
    string 
    */
    // string s = "Striver";
    // int len = s.size();
    // s[len-1] = 'z';
    // cout<<s[len-1];

    /*
    For Loop
    */
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"DEV"<<endl;
    // }

    /*
    While
    */
    // int i=2;
    // while (i<=1)
    // {
    //     cout<<"Dev "<<i<<endl;
    // }
    // do
    // {
    //     cout<<"DEV "<<i<<endl;
    //     i+=1;
    // } while (i<=1);
    // cout<<i<<endl;

//     return 0;
// }
    
    //! Made Multiple int main starting from here 
    /*
    Functions are set of code which performs something for you
    Functions are used to modularize code
    Functions are used to increase readability
    Functions are used to use same code multiple times
    void = which dont return anything
    parameterized
    return
    non para
    */

    //Void
    // void printName(){
    //     cout<<"Heyy Dev";
    // }
    // int main(){
    //     printName();
    //     return 0;
    // }

    // Add name
    //     void printName(string name){
    //     cout<<"Heyy "<<name<<endl;
    // }
    // int main(){
    //     string name;
    //     cin>>name;
    //     printName(name);
        
        //// Adding another name
        
    //     string name2;
    //     cin>>name2;
    //     printName(name2);
    //     return 0;
    // }

    /*
    Take 2 numbers and print sum
    */
    // int sum(int num1,int num2){
    //     int num3 = num1+num2;
    //     return num3; 
    // } 
    // int main(){
    //     int num1, num2;
    //     cin>>num1>>num2;
    //     // int num3 = num1+num2;
    //     // cout<<num3;
    //     int res = sum(num1,num2);
    //     cout<<res;

    //     return 0;
    // } 

    /*
    Max function
    */
    // int maxx(int num1, int num2) {
//     if(num1 >= num2) {
//         return num1;
//     }
//     else
//     {
//         return num2;
//     }
    
//     }
//     int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum;
//     return 0;
// }

    /*
    pass by value vs reference
    */
    //! PASS BY VALUE
    // void doSomething (int num) {
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // }
    // int main() {
    // int num = 10;
    // doSomething (num);
    // cout << num << endl;
    // return 0;
    // }

    // void doSomething (string s) {
    //     s[0] = 'T';
    //     cout<<s<<endl;
    // }
    // int main() {
    // string s = "Raj";
    // doSomething (s);
    // cout << s << endl;
    // return 0;
    // }

    //! Pass by Reference
    // void doSomething (string &s) {
    //     s[0] = 'T';
    //     cout<<s<<endl;
    // }
    // int main() {
    // string s = "Raj";
    // doSomething (s);
    // cout << s << endl;
    // return 0;
    // }

    // void doSomething (int &num) {
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // }
    // int main() {
    // int num = 10;
    // doSomething (num);
    // cout << num << endl;
    // return 0;
    // }

    /*
    Arrays Always pass through reference
    */
    void doSomething(int arr[],int n){
        arr[0] += 100;
        cout<<"Value inside function : "<<arr[0]<<endl; 
    }
    int main(){
        int n =5;
        int arr[n];
        // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
        //! same method
        for (int i = 0; i <n; i++)
        {
            cout<<i<<endl;
            cin>>arr[i];
        }
        

        // cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4];
        //! Same method
        // for (int i = 0; i <=4; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        doSomething(arr,n);
        cout<<"Value inside int main : "<<arr[0]<<endl;
        
        return 0;
    }

