#include <iostream>
#include <string>
std::string maskify(std::string str) {
	std::string str = std::to_string(num);
	std::string result = ""; /*Create a string that is called new1, which will store the result.*/
	//int stars = str[0:str.size()-5]; /* make another variable that is a string that is cal*/
	//led stars and it is the value in the array that has an index of 0 to the string
//	size, in this case 10-5, which gives you 5, the thing with index of 5 is 5.*/
	if (str.size() >= 4) { /*if the strings size is greater than or equal to 
	then ...If the string size is greater than or equal to four, then change the stars to stars*/ 
		string result = (("#" * (str.size()-5))+1)+(str[str.size()-4:str.end()]);
		//new1 + ("#" * (str.size()-5))+1; /*then in the new string you add the strin
		//g size - 5 which is 6 hashtags*/
		//new1 + str[str.size()-4:str.end()]; /*then you add the string value
	//	at the string size minus 5*/
		return result;
	}
	else {
		return "";
	}
}

string resu
