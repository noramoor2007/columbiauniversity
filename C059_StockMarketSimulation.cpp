#include <iostream> // This imports all the necessary libraries for this code. I used "iostream" instead of "stdio.h" because sometimes the format specifiers trip me up and I am also getting a lot of input from this code.
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Username { // This creates a structure that stores values that construct the user's username.
    string firstname; // This is a member of the structure that will store the user's first name.
    string lastname; // Last name member variable.
    string year; // Year of birth member variable, and a constant value with no arithmetic.
};
// Used a "const" qualifier for passing by "const" reference is more efficient, used with the ampersand. In parameter declaration, using an ampersand usually means some sort of reference type.
void createUsername (const string firstname, const string& lastname, const string& year) { // This creates a function called "createUsername" that doesn't return anything and takes in three parameters. The reason why "year" is of type string is that I wanted to create a cool username that involved ASCII values.
    string username; // This is where the username will get generated.
    if (firstname.size () < 3 && lastname.size () < 3) { // This checks if the first and last name is less than 3.
        cout << "\nOh wow! You have quite a short name!"; // If it is, then it comments on that and says they have quite a short name.
        username = firstname + lastname + year; // This sets the username equal to a concatenation of the first and last name and the user's year of birth.
    }
    else {
        // Concatenating the "year" string to the first three letters of the first name and the first letter of the last name.
        username = firstname.substr (0, 3) + lastname.substr (0, 1) + year; // This ".substr" function is a string method that takes a section of a string, and only strings, which is similar to Java. It takes the starting position and the length of the substring.
    }
    cout << "Your username is: \x1b[3m" << username << "\x1b[0m" << endl; // ANSI (American National Standards Institute) escape code.
}
void accountOverview (float accountvalue, float todayschange) { // This method is called "accountOverview" and it returns void, so it returns nothing, and it takes two parameters that are of type float.
    cout << "\n\x1b[1mAccount Overview\x1b[0m"; // This prints an overview of the user's account.
    cout << "\n\x1b[4mAccount Value\x1b[0m: \x1b[95m$" << accountvalue << "\x1b[0m"; // Account value's value is the same as the value of the buying power and cash.
    cout << "\n\x1b[4mBuying Power\x1b[0m: \x1b[95m$" << accountvalue << "\x1b[0m";
    cout << "\n\x1b[4mCash\x1b[0m: \x1b[95m$" << accountvalue << "\x1b[0m";
    cout << "\n\x1b[4mToday's Gains/Losses\x1b[0m: \x1b[95m$" << todayschange << "\x1b[0m"; // Today's change is the amount of money someone gained or lost that day.
}
void tradingGame (float& accountvalue, float& todayschange) { // The ampersands are used to indicate the variables are passed by reference.
    srand (time (0)); // Initializes a random number generator at the current time. A "seed" is used as a starting value to initialize a random number generator, and it determines the starting point for generating a random number sequence.
    double stockprice = (rand () % 100000) / 10.0; // This generates a random stock price value. Generates a number between 0 and 9999999, but because we divide by 10, it ensures that we have a floating point value.
    string industrypicker; // This creates a variable that stores the user's choice of industry.
    string companychoice; // This creates a variable that stores the user's company choice of a specific industry.
    string buystock;
    string sellstock;
    string names [] = {"JohJ2023", "MarG2000", "BobS1997", "AliL1975", "TomB2005", "DavW1985", "SarC2010", "Mic1902", "JesE2002", "DanO2006", "AshL1967", "FraV2007", "ChrP1992", "EmiW2008", "JosI2012", "AmaF2006", "MatB", "BritH1978", "AndJ1999", "SteW2001", "JosR1995", "LauJ2003", "NicB2009", "EliS1976"};
    int numNames = 24;
    srand (time (NULL));
    int randomIndex = rand () % numNames;
    string randomName = names [randomIndex];
    int accountvalue1 [] = {98000, 100100, 90000, 300000, 65000, 83000, 130000};
    int numAccountValue = 7;
    int randomIndex1 = rand () % numAccountValue;
    int randomAccountValue = accountvalue1 [randomIndex1];
    float todayschange1 [] = {4967.45, 972.5, 10334, 4954.4, 63462.45, 54253.4, 254345.37, 1125.5, 7253.67, 5240.53, 3500.3, 2385.65, 1342.75, 534.66, 4255.65, 657.35, 3536.64, 3436.6};
    int numTodaysChange = 14;
    int randomIndex2 = rand () % numAccountValue;
    int randomTodaysChange = todayschange1 [randomIndex2];
    cout << "\n\n\x1b[6mMeet your competitor whose username is " << randomName << ". Try your best to beat your competitor's score!\x1b[0m";
    cout << "\n\x1b[1m" << randomName << "'s Account Overview\x1b[0m";
    cout << "\n\x1b[4mAccount Value\x1b[0m: \x1b[96m$" << randomAccountValue << "\x1b[0m";
    cout << "\n\x1b[4mBuying Power\x1b[0m: \x1b[96m$" << randomAccountValue << "\x1b[0m";
    cout << "\n\x1b[4mCash\x1b[0m: \x1b[96m$" << randomAccountValue << "\x1b[0m";
    cout << "\n\x1b[4mToday's Gains/Losses\x1b[0m: \x1b[96m$" << randomTodaysChange << "\x1b[0m";
    cout << "\n\n\x1b[100mWhat industry do you want to trade stocks in? Pick one of the following:\x1b[0m\n1. \x1b[1mCommunication Services\x1b[0m - telephone, internet, media, and entertainment companies\n2. \x1b[1mConsumer Discretionary\x1b[0m - retailers, automakers, and hotel and restaurant companies\n3. \x1b[1mConsumer Staples\x1b[0m - food, beverage, tobacco, and household and personal products companies\n4. \x1b[1mEnergy\x1b[0m - oil and gas exploration and production companies, pipeline providers, and gas station operators\n5. \x1b[1mFinancial\x1b[0m - banks, mortgage finance specialists, and insurance and brokerage companies\n6. \x1b[1mHealthcare\x1b[0m - health insurers, drug and biotech companies, and medical device makers\n7. \x1b[1mIndustrial\x1b[0m - airline, aerospace and defense, construction, logistics, machinery, and railroad companies\n8. \x1b[1mMaterials\x1b[0m - mining, forest products, construction materials, packaging, and chemical companies\n9. \x1b[1mReal Estate\x1b[0m - real estate investment trusts and real estate management and development companies\n10. \x1b[1mTechnology\x1b[0m - hardware, software, semiconductor, communications equipment, and IT services companies\n11. \x1b[1mUtilities\x1b[0m - electric, natural gas, water, renewable energy, and multi-product utility companies" << endl;
    cin >> industrypicker; // This stores the user's response into the variable, "industrypicker".
    if (industrypicker == "1" || industrypicker == "communication services") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n" // This prints a list of companies and asks the user which company they want to trade stocks in.
                "- Alphabet Inc. (GOOGL)\n"
                "- Meta Platforms Inc. (META)\n"
                "- The Walt Disney Company (DIS)\n"
                "- Comcast Corporation (CMCSA)\n"
                "- T-Mobile US Inc. (TMUS)\n"
                "- Verizon Communications Inc. (VZ)" << endl;
        cin >> companychoice; // This stores the user's response into the variable "companychoice".
        if (companychoice == "GOOGL" || companychoice == "googl") { // If the user's company choice is either "GOOGL" or "googl" then it does the following.
            bool boughtgoogl = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtgoogl = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtgoogl == true) {
                        cout << "You must buy stocks from GOOGL before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "META" || companychoice == "meta") {
            bool boughtmeta = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtmeta = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtmeta == true) {
                        cout << "You must buy stocks from META before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "DIS" || companychoice == "dis") {
            bool boughtdis = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtdis = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtdis == true) {
                        cout << "You must buy stocks from DIS before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "CMCSA" || companychoice == "cmcsa") {
            bool boughtcmcsa = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtcmcsa = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtcmcsa == true) {
                        cout << "You must buy stocks from CMCSA before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "TMUS" || companychoice == "tmus") {
            bool boughttmus = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughttmus = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughttmus == true) {
                        cout << "You must buy stocks from TMUS before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "VZ" || companychoice == "vz") {
            bool boughtvz = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtvz = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtvz == true) {
                        cout << "You must buy stocks from VZ before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "2" || industrypicker == "consumer discretionary") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- Amazon.com Inc. (AMZN)\n"
                "- Tesla Inc. (TSLA)\n"
                "- Home Depot Inc. (HD)\n"
                "- Nike Inc. (NKE)\n"
                "- Shake Shack Inc. (SHAK)\n"
                "- Starbucks Corporation (SBUX)" << endl;
        cin >> companychoice;
        if (companychoice == "AMZN" || companychoice == "amzn") {
            bool boughtamzn = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtamzn = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtamzn == true) {
                        cout << "You must buy stocks from AMZN before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "TSLA" || companychoice == "tsla") {
            bool boughttsla = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughttsla = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughttsla == true) {
                        cout << "You must buy stocks from TSLA before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "HD" || companychoice == "hd") {
            bool boughthd = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughthd = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughthd == true) {
                        cout << "You must buy stocks from HD before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "NKE" || companychoice == "nke") {
            bool boughtnke = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtnke = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtnke == true) {
                        cout << "You must buy stocks from NKE before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SHAK" || companychoice == "shak") {
            bool boughtshak = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtshak = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtshak == true) {
                        cout << "You must buy stocks from SHAK before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SBUX" || companychoice == "sbux") {
            bool boughtsbux = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtsbux = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtsbux == true) {
                        cout << "You must buy stocks from SBUX before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "3" || industrypicker == "consumer staples") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- The Procter & Gamble Company (PG)\n"
                "- Walmart Inc. (WMT)\n"
                "- The Coca-Cola Company (KO)\n"
                "- Mondelez International (MDLZ)\n"
                "- Colgate-Palmolive (CL)\n"
                "- Monster Beverage (MNST)" << endl;
        cin >> companychoice;
        if (companychoice == "PG" || companychoice == "pg") {
            bool boughtpg = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtpg = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtpg == true) {
                        cout << "You must buy stocks from PG before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "WMT" || companychoice == "wmt") {
            bool boughtwmt = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtwmt = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtwmt == true) {
                        cout << "You must buy stocks from WMT before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "KO" || companychoice == "ko") {
            bool boughtko = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtko = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtko == true) {
                        cout << "You must buy stocks from KO before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "MDLZ" || companychoice == "mdlz") {
            bool boughtmdlz = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtmdlz = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtmdlz == true) {
                        cout << "You must buy stocks from MDLZ before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "CL" || companychoice == "cl") {
            bool boughtcl = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtcl = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtcl == true) {
                        cout << "You must buy stocks from CL before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "MNST" || companychoice == "mnst") {
            bool boughtmnst = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtmnst = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtmnst == true) {
                        cout << "You must buy stocks from MNST before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "4" || industrypicker == "energy") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- Exxon Mobil Corporation (XOM)\n"
                "- Chevron Corporation (CVX)\n"
                "- ConocoPhillips (COP)\n"
                "- TotalEnergies SE (TOT)\n"
                "- Enbridge Inc. (ENB)\n"
                "- Imperial Oil Limited (IMO)" << endl;
        cin >> companychoice;
        if (companychoice == "XOM" || companychoice == "xom") {
            bool boughtxom = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtxom = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtxom == true) {
                        cout << "You must buy stocks from XOM before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "CVX" || companychoice == "cvx") {
            bool boughtcvx = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtcvx = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtcvx == true) {
                        cout << "You must buy stocks from CVX before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "COP" || companychoice == "cop") {
            bool boughtcop = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtcop = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtcop == true) {
                        cout << "You must buy stocks from COP before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "TOT" || companychoice == "tot") {
            bool boughttot = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughttot = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughttot == true) {
                        cout << "You must buy stocks from TOT before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "ENB" || companychoice == "enb") {
            bool boughtenb = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtenb = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtenb == true) {
                        cout << "You must buy stocks from ENB before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "IMO" || companychoice == "imo") {
            bool boughtimo = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtimo = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtimo == true) {
                        cout << "You must buy stocks from IMO before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "5" || industrypicker == "financial") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- Berkshire Hathaway Inc. (BRK.B)\n"
                "- Visa Inc. (V)\n"
                "- JPMorgan Chase & Co. (JPM)\n"
                "- Mastercard Inc. (MA)\n"
                "- Bank of America (BAC)\n"
                "- Industrial and Commercial Bank of China (IDCBY)" << endl;
        cin >> companychoice;
        if (companychoice == "BRK.B" || companychoice == "brk.b") {
            bool boughtbrkb = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtbrkb = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtbrkb == true) {
                        cout << "You must buy stocks from BRK.B before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "V" || companychoice == "v") {
            bool boughtv = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtv = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtv == true) {
                        cout << "You must buy stocks from V before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "JPM" || companychoice == "jpm") {
            bool boughtjpm = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtjpm = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtjpm == true) {
                        cout << "You must buy stocks from JPM before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "MA" || companychoice == "ma") {
            bool boughtma = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtma = true;
                    accountvalue -= stockprice;
                    todayschange -= stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtma == false) {
                        cout << "You must buy stocks from MA before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "BAC" || companychoice == "bac") {
            bool boughtbac = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtbac = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtbac == true) {
                        cout << "You must buy stocks from BAC before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "IDCBY" || companychoice == "idcby") {
            bool boughtidcby = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtidcby = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtidcby == true) {
                        cout << "You must buy stocks from IDCBY before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "6" || industrypicker == "healthcare") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- UnitedHealth Group Inc. (UNH)\n"
                "- CVS Health Corp. (CVS)\n"
                "- Pfizer Inc. (PFE)\n"
                "- Teladoc Health Inc. (TDOC)\n"
                "- Eli Lilly and Co. (LLY)\n"
                "- Abbott Laboratories (ABT)" << endl;
        cin >> companychoice;
        if (companychoice == "UNH" || companychoice == "unh") {
            bool boughtunh = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtunh = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtunh == true) {
                        cout << "You must buy stocks from UNH before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "CVS" || companychoice == "cvs") {
            bool boughtcvs = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtcvs = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtcvs == true) {
                        cout << "You must buy stocks from CVS before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "PFE" || companychoice == "pfe") {
            bool boughtpfe = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtpfe = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtpfe == true) {
                        cout << "You must buy stocks from PFE before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "TDOC" || companychoice == "tdoc") {
            bool boughttdoc = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughttdoc = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughttdoc == true) {
                        cout << "You must buy stocks from TDOC before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "LLY" || companychoice == "lly") {
            bool boughtlly = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtlly = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtlly == true) {
                        cout << "You must buy stocks from LLY before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "ABT" || companychoice == "abt") {
            bool boughtabt = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtabt = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtabt == true) {
                        cout << "You must buy stocks from ABT before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "7" || industrypicker == "industrial") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- General Electric Company (GE)\n"
                "- 3M Company (MMM)\n"
                "- Boeing Co. (BA)\n"
                "- United Technologies Corporation (UTX)\n"
                "- Honeywell International Inc. (HON)\n"
                "- Caterpillar Inc. (CAT)" << endl;
        cin >> companychoice;
        if (companychoice == "GE" || companychoice == "ge") {
            bool boughtge = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtge = true;
                    accountvalue -= stockprice;
                    todayschange -= stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtge == false) {
                        cout << "You must buy stocks from GE before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "MMM" || companychoice == "mmm") {
            bool boughtmmm = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtmmm = true;
                    accountvalue -= stockprice;
                    todayschange -= stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtmmm == false) {
                        cout << "You must buy stocks from MMM before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "BA" || companychoice == "ba") {
            bool boughtba = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtba = true;
                    accountvalue -= stockprice;
                    todayschange -= stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtba == false) {
                        cout << "You must buy stocks from BA before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "UTX" || companychoice == "utx") {
            bool boughtutx = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtutx = true;
                    accountvalue -= stockprice;
                    todayschange -= stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtutx == false) {
                        cout << "You must buy stocks from UTX before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "HON" || companychoice == "hon") {
            bool boughthon = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughthon = true;
                    accountvalue -= stockprice;
                    todayschange -= stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughthon == false) {
                        cout << "You must buy stocks from HON before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "CAT" || companychoice == "cat") {
            bool boughtcat = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtcat = true;
                    accountvalue -= stockprice;
                    todayschange -= stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtcat == false) {
                        cout << "You must buy stocks from CAT before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "8" || industrypicker == "materials") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- BHP Group Ltd (BHP)\n"
                "- Linde PLC (LIN)\n"
                "- Rio Tinto PLC (RIO)\n"
                "- Air Liquide SA (AIQUY)\n"
                "- Glencore PLC (GLNCY)\n"
                "- Sherwin-Williams Co (SHW)" << endl;
        cin >> companychoice;
        if (companychoice == "BHP" || companychoice == "bhp") {
            bool boughtbhp = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtbhp = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtbhp == true) {
                        cout << "You must buy stocks from BHP before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "LIN" || companychoice == "lin") {
            bool boughtlin = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtlin = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtlin == true) {
                        cout << "You must buy stocks from LIN before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "RIO" || companychoice == "rio") {
            bool boughtrio = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtrio = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtrio == true) {
                        cout << "You must buy stocks from GOOGL before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "AIQUY" || companychoice == "aiquy") {
            bool boughtaiquy = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtaiquy = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtaiquy == true) {
                        cout << "You must buy stocks from AIQUY before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "GLNCY" || companychoice == "glncy") {
            bool boughtglncy = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtglncy = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtglncy == true) {
                        cout << "You must buy stocks from GLNCY before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SHW" || companychoice == "shw") {
            bool boughtshw = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtshw = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtshw == true) {
                        cout << "You must buy stocks from SHW before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "9" || industrypicker == "real estate") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- Brandywine Realty Trust (BDN)\n"
                "- SL Green Realty (SLG)\n"
                "- CoStar Group (CSGP)\n"
                "- Empire State Realty Trust (ESRT)\n"
                "- Tanger Factory Outlet Centers (SKT)\n"
                "- Simon Property Group (SPG)" << endl;
        cin >> companychoice;
        if (companychoice == "BDN" || companychoice == "bdn") {
            bool boughtbdn = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtbdn = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtbdn == true) {
                        cout << "You must buy stocks from AIQUY before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SLG" || companychoice == "slg") {
            bool boughtslg = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtslg = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtslg == true) {
                        cout << "You must buy stocks from SLG before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "CSGP" || companychoice == "csgp") {
            bool boughtcsgp = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtcsgp = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtcsgp == true) {
                        cout << "You must buy stocks from CSGP before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "ESRT" || companychoice == "esrt") {
            bool boughtesrt = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtesrt = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtesrt == true) {
                        cout << "You must buy stocks from ESRT before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SKT" || companychoice == "skt") {
            bool boughtskt = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtskt = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtskt == true) {
                        cout << "You must buy stocks from SKT before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SPG" || companychoice == "spg") {
            bool boughtspg = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtspg = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtspg == true) {
                        cout << "You must buy stocks from SPG before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "10" || industrypicker == "technology") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- Facebook (FB)\n"
                "- Apple (AAPL)\n"
                "- Netflix (NFLX)\n"
                "- Microsoft (MSFT)\n"
                "- Intel Corporation (INTC)\n"
                "- Adobe Inc. (ADBE)" << endl;
        cin >> companychoice;
        if (companychoice == "FB" || companychoice == "fb") {
            bool boughtfb = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtfb = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtfb == true) {
                        cout << "You must buy stocks from FB before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "AAPL" || companychoice == "aapl") {
            bool boughtaapl = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtaapl = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtaapl == true) {
                        cout << "You must buy stocks from AAPL before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "NFLX" || companychoice == "nflx") {
            bool boughtnflx = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtnflx = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtnflx == true) {
                        cout << "You must buy stocks from NFLX before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "MSFT" || companychoice == "msft") {
            bool boughtmsft = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtmsft = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtmsft == true) {
                        cout << "You must buy stocks from MSFT before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "INTC" || companychoice == "intc") {
            bool boughtintc = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtintc = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtintc == true) {
                        cout << "You must buy stocks from INTC before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "ADBE" || companychoice == "adbe") {
            bool boughtadbe = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtadbe = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtadbe == true) {
                        cout << "You must buy stocks from ADBE before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else if (industrypicker == "11" || industrypicker == "utilities") {
        cout << "\nTry and get the most money from trading stocks in such companies, if you don't you lose!";
        cout << "\nPick a company to trade stocks!\n"
                "- NextEra Energy, Inc. (NEE)\n"
                "- The Southern Company (SO)\n"
                "- Duke Energy Corporation (DUK)\n"
                "- NRG Energy (NRG)\n"
                "- Edison International (EIX)\n"
                "- Spire Inc. (SR)" << endl;
        cin >> companychoice;
        if (companychoice == "NEE" || companychoice == "nee") {
            bool boughtnee = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtnee = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtnee == true) {
                        cout << "You must buy stocks from NEE before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SO" || companychoice == "so") {
            bool boughtso = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtso = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtso == true) {
                        cout << "You must buy stocks from SO before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "DUK" || companychoice == "duk") {
            bool boughtduk = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtduk = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtduk == true) {
                        cout << "You must buy stocks from DUK before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "NRG" || companychoice == "nrg") {
            bool boughtnrg = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtnrg = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtnrg == true) {
                        cout << "You must buy stocks from NRG before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "EIX" || companychoice == "eix") {
            bool boughteix = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughteix = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughteix == true) {
                        cout << "You must buy stocks from EIX before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else if (companychoice == "SR" || companychoice == "sr") {
            bool boughtsr = false;
            cout << "\nAverage Stock Value: $" << stockprice << endl;
            if (accountvalue >= stockprice) {
                cout << "Would you like to buy or sell these stocks? ";
                cin >> buystock;
                if (buystock == "buy") {
                    boughtsr = true;
                    accountvalue -= stockprice;
                    todayschange += stockprice;
                    cout << "\n\x1b[1mAccount Overview\x1b[0m";
                    cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                    cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                    if (todayschange < 0) {
                        todayschange *= -1;
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                    else {
                        cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                    }
                }
                else if (buystock == "sell") {
                    if (boughtsr == true) {
                        cout << "You must buy stocks from SR before selling any.";
                    }
                    else {
                        accountvalue += stockprice;
                        todayschange += stockprice;
                        cout << "\n\x1b[1mAccount Overview\x1b[0m";
                        cout << "\nAccount Value: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nBuying Power: \x1b[97m$" << accountvalue << "\x1b[0m";
                        cout << "\nCash: \x1b[97m$" << accountvalue << "\x1b[0m";
                        if (todayschange < 0) {
                            todayschange *= -1;
                            cout << "\nToday's Gains/Losses: \x1b[97m-$" << todayschange << "\x1b[0m";
                        }
                        else {
                            cout << "\nToday's Gains/Losses: \x1b[97m+$" << todayschange << "\x1b[0m";
                        }
                    }
                }
                else {
                    cout << "Invalid option.";
                }
            }
            else {
                cout << "\x1b[91mInsufficient funds to buy stocks! Game over!\x1b[0m" << endl;
            }
        }
        else {
            cout << "Sorry, but " << companychoice << " does not exist.";
        }
    }
    else {
        cout << "That industry does not exist.";
    }
}
int main () {
    string firstname;
    string lastname;
    string year;
    string gameinitializer;
    float accountvalue = 100000.0; // I want to make it so that the value of the account will only reset to 10000 when the code is re-run.
    float todayschange = 0.0;
    cout << "\x1b[102mStock Market Simulator\x1b[0m";
    cout << "\nWelcome to the \x1b[3mStock Market Simulator\x1b[0m, where you can create your own trading account and you can trade on the stock market!";
    cout << "\nPlease enter your first name: ";
    cin >> firstname;
    cout << "Please enter your last name: ";
    cin >> lastname;
    cout << "Please enter your year of birth: ";
    cin >> year;
    createUsername (firstname, lastname, year);
    accountOverview (accountvalue, todayschange);
    do {
        tradingGame (accountvalue, todayschange);
        cout << "\nWould you like to play again? ";
        cin >> gameinitializer;
    }
    while (gameinitializer == "yes");
    /*
    int counter = 10; //amount of seconds
    Sleep (1000);
    while (counter >= 1)
    {
        cout << "\rTime remaining: " << counter << flush;
        Sleep (1000);
        counter--;
    }
     */
    return 0;
}