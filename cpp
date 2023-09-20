/* Frank's carpet cleaning service
 Charges $25 per small room		* Edited *
		 $35 per large room
 Sales tax rate is 6%
 Estimates are valid for 30 days
 
 Prompt the user for the number of rooms they would like cleaned and provide them an estimate
 
 i.e
 Estimate for carpet cleaning service:
 Number of small room : 3
 Number of big room : 1
 Price per large room : $25
 Price per small room : $35
 Cost : $110
 Tax : $6.6
 
 ====================================
 Total Estimate : $116.6
 This estimate is valid for 30 days.
 
Pseudocode:
  Prompt user to enter number of rooms
  Display number of rooms
  Display price per rooms
  Cost = Price per room * number of rooms
  Tax = Cost * tax rate
  Display total estimate
  Display estimate expiration timeline
*/
#include <iostream>;
using namespace std;


int main()
{
	const int price_per_big_room{ 35 };
	const int price_per_small_room{ 25 };
	int number_of_small_rooms;
	int number_of_big_rooms;
	const double tax_rate{ 0.06 };


	cout << "Hello there, welcome to Frank's Carpet Cleaning Service" << endl;
	cout << endl;

	cout << "How many small rooms would you like to be cleaned : ";
	cin >> number_of_small_rooms;
	cout << endl;
	cout << "How many big rooms would you like to cleaned : ";	
	cin >> number_of_big_rooms;


	int cost = (price_per_big_room * number_of_big_rooms) + (price_per_small_room * number_of_small_rooms);
	double tax = cost * tax_rate;

	cout << endl;

	cout << "Estimate for Frank's Carpet Cleaning Service" << endl;
	cout << "Number of small rooms : " << number_of_small_rooms << endl;
	cout << "Number of big rooms : " << number_of_big_rooms << endl;
	cout << "Price per small room : $" << price_per_small_room << endl;
	cout << "Price per big room : $" << price_per_big_room << endl;
	cout << "Cost : $" << cost <<endl;
	cout << "Tax : $" << tax << endl;

	double total = cost + tax;
	cout << "================================\n";
	cout << "Total Estimate : $" << total << endl;
	cout << "This estimate is valid for 30 days." << endl;

	return 0;
}
