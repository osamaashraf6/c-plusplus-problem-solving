#include <iostream>

using namespace std;
//==========================================================****************
//int fact(int n){
//int mul = 1;
//for(int i = n; i >= 1; i--){
  //  mul = mul * i;

//}
//return mul;
//}
//==========================================================
int main()
{
//==========================================================*************
//int arr[5];
//int *ptr;
//ptr = arr;
//for(int i = 0; i < 5; i++){
  //  cin >> *(ptr + i);
//}
//for(int i = 0; i < 5; i++){
  //  cout << *(ptr + i);
//}

//============
   // int x = 5;
    //int *ptr;
    //ptr = &x;
    //cout << "the value of x is : " << *ptr << " the address of the x is : " <<ptr;
//==========================================================******************
   cout << "add two array 2d and display third one";
   int arr1[2][3];
    int arr2[2][3];
    int arr3[2][3];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr1[i][j];
                cin >> arr2[i][j];
                arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
   }


     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr3[i][j]<<"\t";
        }
        cout << "\n";
    }
//==========================================================******************
// cout << "add two array and display third one";
   // int arr1[5], arr2[5], arr3[5];
    //for(int i = 0; i < 5; i++){
      //  cin >> arr1[i]>>arr2[i];
        //arr3[i] = arr1[i] + arr2[i];
    //}
    //for(int i = 0; i < 5; i++){
      //  cout << arr3[i]<<"\t";
    //}
//==========================================================**************
// cout << "multiple num in the array elems";
  // int arr[5];
  //for(int i = 0; i < 5; i++){
    //cin >> arr[i];
  //}
  //for(int i = 0; i < 5; i++){
    //cout << arr[i] * 2<<"\t";
  //}

//==========================================================*****************
// cout << "the reverse";
  //int arr[5];
  //for(int i = 0; i < 5; i++){
    //cin >> arr[i];
  //}
  //for(int i = 4; i >= 0; i--){
    //cout << arr[i]<<"\t";
  //}
 //==========================================================**************
  //   int arr[5];
   // int pos = 0;
    //int neg = 0;
    //int sumOfPos = 0;
   // int sumOfNeg = 0;
    //for(int i = 0; i < 5; i++){
      //  cin >> arr[i];
        //if(arr[i] > 0){
          //  pos++;
           // sumOfPos = sumOfPos + arr[i];
        //}else if(arr[i] < 0){
        //neg++;
        //sumOfNeg = sumOfNeg + arr[i];
        //}
    //}
    //cout << "the nums of pos and sum: "<<pos<<"==="<<sumOfPos<<" the nums of the neg and sum : "<<neg<<"==="<<sumOfNeg;
//==========================================================
  //cout << "the num of pos and neg";
    //int arr[5];
    //int pos = 0;
    //int neg = 0;
    //for(int i = 0; i < 5; i++){
      //  cin >> arr[i];
        //if(arr[i] > 0){
          //  pos++;
        //}else if(arr[i] < 0){
        //neg++;
        //}
   // }
    //cout << "the nums of neg : "<<neg<<" the nums of the pos : "<<pos;
//==========================================================
//cout << "sum of the array";
 //   int arr[3];
   // int sum = 0;
    //for(int i = 0; i < 3; i++){
     // cin >> arr[i];
      //sum = sum + arr[i];
    //}
    //cout << sum<<endl;
    //for(int i = 0; i < 3; i++){
    //cout << arr[i]<<"\t";
//}
//==========================================================*****************
//cout << "fill the array from the user and loop through it to display";
//int arr[10];
//for(int i = 0; i < 10; i++){
  //  cin >> arr[i];
//}
//for(int i = 0; i < 10; i++){
  //  cout << arr[i]<<"\t";
//}
//==========================================================****************
//int n, r;
//cin >> n >> r;
//cout << "the permutaion"<<endl;
//int a = n - r;
//int result = fact(n) / (fact(a) * fact(r));
//cout << "the result : "<<result;
//==========================================================***************

    //cout << "fibonacci numbers" << endl;
   // int f0 = 0;
    //int f1 = 1;
    //cout << f0 << endl;
    //cout << f1 <<endl;
    //while(true){
     //   int f2 = f0 + f1;
       // if(f2 < 50){
         // cout << f2 <<endl;
         // f0 = f1;
         // f1 = f2;
        //}else{
        //break;
        //}

    //}

//===============================================================
  // cout << "odd numbers" << endl;
  // for(int i = 1; i < 20; i+=2){
  //  cout << i <<"\n";
  // }
//===============================================================

 //cout << "odd numbers" << endl;
  //for(int i = 0; i < 20; i++){
  //if(i % 2 != 0){
    //cout << i <<endl;
  //}
   //}

//===============================================================
//cout << "even numbers" <<endl;
//for(int i = 0; i < 20; i += 2){
  //  cout << i <<endl;
//}
//===============================================================
//cout << "even numbers"<<endl;
//for(int i = 0; i < 20; i++){
  //  if(i % 2 == 0){
   //     cout << i <<endl;
    //}
//}
//===============================================================
//cout << "dynamic increasing value";
//int a = 0;
//for(int i = 1; i < 20; i++){
  //  cout << a <<"\t";
    //a = a + i;
//}
//===============================================================
//cout << "static increasing value"<<endl;
//for(int i = 0; i < 60; i += 10){
  //  cout << i <<"\t";
//}
//===============================================================
// cout << "prime numbers";
//for(int i = 0; i < 100; i++){
  //       int flag = 0;
  // for(int j = 2; j < i; j++){
   // if(i % j == 0){
     //   flag = 1;
    //}
   //}
    //if(flag == 0){
     //   cout << i<<endl;
    //}
//}
//===============================================================
//cout << "pi";
//for(float i = 2; i < 20; i++){
  //  cout << 1 / i;
//}
//===============================================================

//===============================================================
//===============================================================
//===============================================================
//===============================================================
//===============================================================
//===============================================================
//===============================================================
//===============================================================





//==========================================================

   //cout << "fibonacci numbers sum" << endl;
    //int f0 = 0;
    //int f1 = 1;
    //cout << f0 << endl;
    //cout << f1 <<endl;
    //int sum = f0 + f1;
    //while(true){
      //  int f2 = f0 + f1;
        //if(f2 < 10){
          //      sum = sum +f2;
         // cout << f2 <<endl;
          //f0 = f1;
          //f1 = f2;
        //}else{
        //break;
    //}

    //}
//cout << sum;
//===============================================================
  // cout << "odd numbers sum" << endl;
  //int sum = 0;
  //for(int i = 1; i < 5; i+=2){
    //cout << i <<"\n";
  //sum = sum + i;
   //}
  //cout << sum;
//===============================================================

 //cout << "odd numbers sum" << endl;
 // int sum = 0;
  //for(int i = 0; i < 20; i++){
  //if(i % 2 != 0){
    //cout << i <<endl;
    // sum = sum + i;
  //}
   //}
// cout << sum;
//===============================================================
//cout << "even numbers sum" <<endl;
// int sum = 0;
//for(int i = 0; i < 20; i += 2){
  //  cout << i <<endl;
  // sum = sum + i;
//}
//cout << sum;
//===============================================================
//cout << "even numbers sum"<<endl;
//int sum = 0;
//for(int i = 0; i < 20; i++){
  //  if(i % 2 == 0){
   //     cout << i <<endl;
   //sum = sum + i;
    //}
//}
//cout <<;
//===============================================================






        return 0;
}
