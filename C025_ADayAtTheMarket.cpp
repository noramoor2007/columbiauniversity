#include <iostream>
// Backpack Bill and Wallet Will set off for the annual festival. As they approach the stalls, Bill retorts that he'll be able to bring home more stuff than Will. Taking this as a challenge, Will refutes and a competition spurs into action. Backpack Bill has an infinite inventory space, but a limited number of coins. Wallet Will has an infinite number of coins, but a limited inventory space. Create a function that returns the name of the man who can bring home the most items. The parameters are Bill's amount of money, Will's amount of inventory space, the item's price, and the item's size.
std :: string whoWinsTonight (int coins, int space, int price, int size) {
	if ((coins / price) > (space / size)) { // This is an if-statement that checks if the number of items that Bill will get is more than Will.
		return "Bill"; // If these conditions are met, then the function, "whoWinsTonight", returns "Bill", who is the winner.
	}
	else if ((coins / price) < (space / size)) { // This is an if-statement that checks if the number of items that Will will get is more than Bill.
		return "Will"; // If these conditions are met, then the function, "whoWinsTonight", returns "Will", who is the winner.
	}
	else { // If none of the above conditions are met, this else-statement is executed.
		return "Tie"; // This returns "Tie" because the only other possible thing to have occurred in this situation if none of the other conditions applied, is that they got the same of amount of stuff and tied.
	}
}	