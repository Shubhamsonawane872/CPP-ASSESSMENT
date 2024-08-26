#include <iostream>
#include <string>
using namespace std;

class car {
  public :
  //Properties
  string brand ;
  string model ; 
  int year ;
  
  //Function to display car info
  void displayinfo(){
    cout << "brand : " << brand << endl;
    cout << "model : " << model << endl;
    cout << "year : " << year << endl;
  }

};

int main(){
  //create an object for car
  car car1;
  car1.brand = "toyota";
  car1.model = " fortuner";
  car1.year = 2009;
  
  //create object for another car
  car car2;
  car2.brand = "tata";
  car2.model = "harrier";
  car2.year = 2017;
  
  //create object for another car
  car car3;
  car3.brand = "lamborghini" ;
  car3.model = "SVJ 63";
  car3.year = 2019;
  
    //create object for another car
  car car4;
  car4.brand = "maruti suzuki" ;
  car4.model = "swift";
  car4.year = 2005;
  
      //create object for another car
  car car5;
  car5.brand = "mahindra" ;
  car5.model = "thar";
  car5.year = 2010;
  
  //Print attribute values 
  cout << "car1 information : " << endl;
  car1.displayinfo();
  cout << endl; //for better readability
  
  cout << "car2 information : " << endl;
  car2.displayinfo(); 
  cout <<  endl ; //for better readability
  
  cout << "car3 information : " << endl;
  car3.displayinfo();
   cout<<endl;
  
cout << "car4 information : " << endl;
  car4.displayinfo();
   cout<<endl;
  
  cout << "car5 information : " << endl;
  car5.displayinfo();
   cout<<endl;
   
  /*cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
  cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
  cout << car3.brand << " " << car3.model << " " << car3.year << "\n"; */
  
return 0 ;
}