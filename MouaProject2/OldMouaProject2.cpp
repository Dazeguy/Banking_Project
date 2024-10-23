#include <iostream> // input output stream
#include <iomanip> // parametric manipulators
#include <cstdlib> // random num generator
#include <ctime> // manipulate date and time information
#include <string>
using namespace std;

int main()
{
    // seed random numbers at time(0) to ensure different values can be generated.
    srand(time(0));

    // declare variables 
    string mainMenuChoice, depositMenuChoice;
    double depositAmount = 0.0, withdrawalAmount = 0.0, endingBalance = 0.0;
    long hundreds = 0, fifties = 0, twenties = 0, tens = 0, fives = 0, ones = 0;
    long quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    long dollarAndCents = 0;

    // declare constants
    const double HUNDRED = 100.00;
    const double FIFTY   = 50.00;
    const double TWENTY  = 20.00;
    const double TEN     = 10.00;
    const double FIVE    = 5.00;
    const double ONE     = 1.00;
    const double QUARTER = 0.25;
    const double DIME    = 0.10;
    const double NICKEL  = 0.05;
    const double PENNY   = 0.01;
    
    // generate a current balance between 1 and $5000.00
    double currentBalance = 1 + ((double)rand() / RAND_MAX) * 5000;

    // format output to show two decimal places using setpreceision()
    cout << setprecision(2) << showpoint << fixed;

    // display weclome message and starting balance
    cout << endl << setw(38) << "Welcome to CLickety Bank!\n\n";
    cout << " Your current account balance is: $" << currentBalance <<endl << endl;

    // display the main menu
    cout << setw(22) << "--Main Menu--\n";
    cout << "\n Would you like to do today? \n";
    cout << "\tA - Make a Desposit \n";
    cout << "\tB - Make a Withdrawal \n";
    cout << "Enter your choice (A or B): ";
    getline(cin, mainMenuChoice);

    if (mainMenuChoice != "A" && mainMenuChoice != "a" && mainMenuChoice != "B" && mainMenuChoice != "b")
    {
        // validate input
        cout << "\n ERROR: Invalid Main Menu Choice. Program will exit.";
        return 0;
    }

    if (mainMenuChoice == "A" || mainMenuChoice == "a")
    {
        // handle input
        cout << setw(22) << "--Main Menu--\n";
        cout << "\n Would you like to do today? \n";
        cout << "\tA - Cash Only \n";
        cout << "\tB - Change Only \n";
        cout << "Enter your choice (A or B): ";
        getline(cin, depositMenuChoice);

        if (mainMenuChoice != "A" && mainMenuChoice != "a" && mainMenuChoice != "B" && mainMenuChoice != "b")
        {
            // validate input
            cout << "\n ERROR: Invalid Deposit Menu Choice. No Deposit will be processed. \n";
        }
        else if (depositMenuChoice == "A" || depositMenuChoice == "a")
        {
            // cash only deposit

            //get the input of the number of hundreds

            cout << "\n Enter the number of hundreds (min: 0, max: 100): ";
            cin >> hundreds;
            
            // validate the input of the number of hundreds 
            if (hundreds < 0 or hundreds > 100)
            {
                cout << "\n ERORR: INVALID NUMBER OF HUNDREDS ENTERED. 0 $100.00 Bills will be added. \n\n";
                hundreds = 0;
            }
            
            // get the input of the number of fifties.
            cout << "\n Enter the number of fifties (min: 0, max: 100): ";
            cin >> fifties;

            //validate the input of the number of fifties
            if (fifties < 0 or fifties > 100)
            {
                cout << "\n ERORR: INVALID NUMBER OF FIFTIES ENTERED. 0 $50.00 Bills will be added. \n\n";
                fifties = 0;
            }

            // get the input of the number of twenties

            cout << "\n Enter the number of twenties (min: 0, max: 100): ";
            cin >> twenties;

            // validate the input of the number of twenties 
            if (twenties < 0 or twenties > 100)
            {
                cout << "\n ERORR: INVALID NUMBER OF TWENTIES ENTERED. 0 $20.00 Bills will be added. \n\n";
                twenties = 0;
            }

            // get the input of the number of tens

            cout << "\n Enter the number of tens (min: 0, max: 100): ";
            cin >> tens;

            // validate the input of the number of tens 
            if (tens < 0 or tens > 100)
            {
                cout << "\n ERORR: INVALID NUMBER OF TENS ENTERED. 0 $10.00 Bills will be added. \n\n";
                tens = 0;
            }

            // get the input of the number of ones

            cout << "\n Enter the number of ones (min: 0, max: 100): ";
            cin >> ones;

            // validate the input of the number of ones
            if (ones < 0 or ones > 100)
            {
                cout << "\n ERORR: INVALID NUMBER OF ONES ENTERED. 0 $1.00 Bills will be added. \n\n";
                ones = 0;
            }

            // add the deposit amounts
            depositAmount += hundreds * HUNDRED;
            depositAmount += fifties * FIFTY;
            depositAmount += twenties * TWENTY;
            depositAmount += tens * TEN;
            depositAmount += ones * ONE;

            // add the change deposit amounts

        }
        else
        {
            // change only deposit

            // get the input of number of quarters
            cout << "\n Enter the number of quarters (min:0, max:100): ";
            cin >> quarters;

            // validate the input of the number of quarters 
            if (quarters < 0 or quarters > 100)
            {
                cout << "\n ERROR: INVALID NUMBER OF QUARTERS ENTERED. 0 QUARTERS will be added. \n\n";
                quarters = 0;
            }

            // get the input of number of dimes
            cout << "\n Enter the number of dimes(min:0, max:100): ";
            cin >> dimes;

            // validate the input of the number of dimes 
            if (dimes < 0 or dimes > 100)
            {
                cout << "\n ERROR: INVALID NUMBER OF DIMES ENTERED. 0 DIMES will be added. \n\n";
                dimes = 0;
            }

            // get the input of number of nickels
            cout << "\n Enter the number of nickels (min:0, max:100): ";
            cin >> nickels;

            // validate the input of the number of nickels 
            if (nickels < 0 or nickels > 100)
            {
                cout << "\n ERROR: INVALID NUMBER OF NICKELS ENTERED. 0 NICKELS will be added. \n\n";
                nickels = 0;
            }

            // get the input of number of pennies
            cout << "\n Enter the number of pennies (min:0, max:100): ";
            cin >> pennies;

            // validate the input of the number of pennies 
            if (pennies < 0 or pennies > 100)
            {
                cout << "\n ERROR: INVALID NUMBER OF PENNIES ENTERED. 0 PENNIES will be added. \n\n";
                quarters = 0;
            }

            // add the deposit amounts
            depositAmount += quarters * QUARTER;
            depositAmount += dimes * DIME;
            depositAmount += nickels * NICKEL;
            depositAmount += pennies * PENNY;
        }
    }
    else
    {
        // handle a withdrawl if(mainMenuChoice == "B" || mainMenuChoice == "b")'
        cout << "\n How much would you like to withdraw from your account? (max: $" << currentBalance << ")$";
        cin >> withdrawalAmount;

        if (withdrawalAmount < 0 or withdrawalAmount > currentBalance)
        {
            // validate input
            cout << "\n ERROR: Invalid Withdrawal Amount. No withdrawal will be processed. \n";
            withdrawalAmount = 0;
        }
        else
        {
            // process the withdrawal and break that amount down into denominations
            dollarAndCents = withdrawalAmount * 100; // converts the entire amount into pennies

            // use sequential division and modular divsion to calculate the amounts
            hundreds = dollarAndCents / 10000;      // $100.00 = 10,000 pennies
            dollarAndCents = dollarAndCents % 10000;// remove the hundreds

            fifties = dollarAndCents / 5000;        // $50.00 = 5,000 pennies
            dollarAndCents = dollarAndCents % 5000; // remove the fifties

            twenties = dollarAndCents / 2000;       // $20.00 = 2,000 pennies
            dollarAndCents = dollarAndCents % 2000; // $20.00 = 2,000 pennies

            tens = dollarAndCents / 1000;           // $10.00 = 1,00 pennies
            dollarAndCents = dollarAndCents % 1000; // $10.00 = 1,000 pennies

            fives = dollarAndCents / 500;           // $5.00 = 500 pennies
            dollarAndCents = dollarAndCents % 500;  // remove the fives

            ones = dollarAndCents / 100;            // $1.00 = 100 pennies
            dollarAndCents = dollarAndCents % 100;  // remove the dollars

            quarters = dollarAndCents / 25;         // remove the quarters
            dollarAndCents = dollarAndCents % 25;   // remove the quarters

            dimes = dollarAndCents / 10;            // $0.05 = 5 pennies
            dollarAndCents = dollarAndCents % 10;   // remove the dimes

            nickels = dollarAndCents / 5;           // $0.05 = 5 pennies

            pennies = dollarAndCents % 5;           // remove the nickels to get the leftover pennies
        }
    }
    // display the updated balance through a transaction receipt
    cout << "\n\n ------Transaction Receipt------\n";
    cout << "\t Starting Balance: \t $" << currentBalance << endl;
    if (mainMenuChoice == "A" || mainMenuChoice == "a")
    {
        cout << "\t Deposit Breakdown \t $" << depositAmount << endl;
        if (depositAmount > 0)
        {
            // breakdwon
            cout << "\n\t Deposit Breakdown " << endl;
            cout << "\t" << setw(10) << "Count " << "\t Amount \n";
        }
        endingBalance = currentBalance + depositAmount;
    }
    else
    {
        // display the results of a withdrawal same as 'if(mainMenuCHoice == "B" or mainMenuChoice == "b")
        cout << "\t Withdrawal Amount: \t $" << withdrawalAmount << endl;
        if (withdrawalAmount > 0)
        {
            cout << "\n\t Withdrawal Breakdown:" << endl;
            cout << "\t" << setw(10) << "Count " << "\t Amount \n";
        }
    }
    
    // display the breakdown of the transaction amount
    if (hundreds > 0)
    {
        cout << "\t" << setw(3) << hundreds << " x $" << HUNDRED << "\t $" << (hundreds * HUNDRED) << endl;
    }

    if (fifties > 0)
    {
        cout << "\t" << setw(3) << fifties << " x $" << FIFTY << "\t $" << (fifties * FIFTY) << endl;
    }

    if (twenties > 0)
    {
        cout << "\t" << setw(3) << twenties << " x $" << TWENTY << "\t $" << (twenties * TWENTY) << endl;
    }
    if (tens > 0)
    {
        cout << "\t" << setw(3) << tens << " x $" << TEN << "\t $" << (tens * TEN) << endl;
    }

    if (ones> 0)
    {
        cout << "\t" << setw(3) << ones << " x $" << ONE << "\t $" << (ones * ONE) << endl;
    }

    if (quarters > 0)
    {
        cout << "\t" << setw(3) << quarters << " x $" << QUARTER << "\t $" << (quarters * QUARTER) << endl;
    }

    if (dimes > 0)
    {
        cout << "\t" << setw(3) << dimes << " x $" << DIME << "\t $" << (dimes * DIME) << endl;
    }

    if (nickels > 0)
    {
        cout << "\t" << setw(3) << nickels << " x $" << NICKEL << "\t $" << (nickels * NICKEL) << endl;
    }

    if (pennies > 0)
    {
        cout << "\t" << setw(3) << pennies << " x $" << PENNY << "\t $" << (pennies * PENNY) << endl;
    }


    cout << "\n\t Ending Balance: \t $" << endingBalance << endl;

    
}

