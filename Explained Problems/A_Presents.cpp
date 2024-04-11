// Miguel Marines

#include<iostream> // Librería
using namespace std; // Namespace

int main() // Main
{
	int n; // Quantity or number of friends.
	cin>>n; // Input number of friends.
	
	int giver1[n]; // Friends that gave gifts to the i friend, (In order).
	
	/* Cicle controled by the number of friends, obtains the input number of a 
	friend who gave a gift to friend number i. */
	for(int i = 0; i<n; i++) 
	{
		cin>>giver1[i]; 
	}
	
	int giver2[n];
	
	/* Cicle controled by the number of friends, Equals to the number of the 
	friend who gave a gift to friend number i. */
	for(int i = 0; i<n; i++)
	{
		giver2[giver1[i]-1] = i+1; 
	}
	
	
	/* Cicle controled by the number of friends, prints the number of the friend 
	who gave a gift to friend number i. */
	for(int i = 0; i<n-1; i++)
	{
		cout<<giver2[i]<<" ";
	}
	cout<<giver2[n-1];
	
	return 0; // Ends program.
}