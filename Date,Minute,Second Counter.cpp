#include <iostream>
using namespace std;

int main(){
	int Input;
	int Minute = 60;
	int Day = 86400;

	cout << " Input: ";
	cin >> Input;

     int cal = Input % Day;
     
	int Seconds = Input % Minute;
	
	int Minutes = cal / Minute;
	
	int Days = Input / Day;
	
/*	if (Input <= Minute){
		cout << " " << cal << " Minutes and " << cal2 << " seconds \n";	
	}
*/
	
	if (Input >= Minute){
	    
		cout << " " << Days << " Days " << Minutes << " Minutes and " << Seconds << " seconds \n";
	}
	
	else {
	cout <<" Wrong input!";
	}
   
	// Add Hours 
	// Minutes limit is 60
	
	return 0;
}
