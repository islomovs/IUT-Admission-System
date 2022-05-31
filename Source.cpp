// Project: Admission System of Inha University
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <string.h>
using namespace std;
bool isNum(string s);
bool isLetter(string s);
void message();
void welcome()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	cout << "\t\t                                                WELCOME TO INHA UNIVERSITY IN TASHKENT" << endl;
	cout << "\t\t                                                      =========================" << endl;
	cout << "\t\t                                                      _________________________" << endl;
	cout << "\t\t                                                      |       _______         ||" << endl;
	cout << "\t\t                                                      |       |     |         ||" << endl;
	cout << "\t\t                                                      |       |     |         ||" << endl;
	cout << "\t\t                                         ============ |       |=====|         ||===================" << endl;
	cout << "\t\t                                        ||            |       |     |         ||                  ||" << endl;
	cout << "\t\t                                       ||             |       |     |         ||                   ||" << endl;
	cout << "\t\t                                      ||              |       |     |         ||                    ||" << endl;
	cout << "\t\t                                     ||               |       |     |         ||                     ||" << endl;
	cout << "\t\t                                    ||               /        /     |         ||                      ||" << endl;
	cout << "\t\t                                   ||               /        /      |         ||                       ||" << endl;
	cout << "\t\t                                  ||               /        /       |         ||                        ||" << endl;
	cout << "\t\t                                 ||               /        /        |         ||                         ||" << endl;
	cout << "\t\t                                ||               /_______ /         |_________||                          ||" << endl;
	cout << "\t\t                               ||                                                                          ||" << endl;
	cout << "\t\t                              ||                                                                            ||" << endl;
	cout << "\t\t                             ||             2222222222       000000        111111         4444444            ||" << endl;
	cout << "\t\t                            ||           222      222      000    000     11  111       444    444            ||" << endl;
	cout << "\t\t                           ||                   222        000    000         111     444     444              ||" << endl;
	cout << "\t\t                          ||                  222          000    000         111    44444444444444             ||" << endl;
	cout << "\t\t                         ||                 222            000    000         111             444                ||" << endl;
	cout << "\t\t                        ||                222222222222       000000      111111111111         444                 ||" << endl;
	cout << "\t\t                        //                                                                                       //" << endl;
	cout << "\t\t                            //                                                                            //" << endl;
	cout << "\t\t                                   //                                                               //" << endl;
	cout << "\t\t                                          //                                                   //" << endl;
	cout << "\t\t                                                //                                      //" << endl;
	cout << "\t\t                                                       //                        //" << endl;
	cout << "\t\t                                                              //          //" << endl;
	cout << "\t\t                                                                   ////" << endl;

	cout << "\n\n\t\t\t\t\t\t\t\tDear applicant, welcome to Inha University !\n";
}
// Sign in & Sign up to personal room
void sign_in()
{
	int passwordnumbers[10] = { 0,1,2,3,4,5,6,7,8,9 };
	string accountlist = "u2110000";           // Default username 
	string accountpassword = "1234567";  // Default password
	string account;
	string password;
	string yes_no;
signin:
	cout << "\n\tIf you have an account, already, type 'yes'. If not type 'no' to proceed sign in.\n\t";
	cin >> yes_no;
	system("CLS");
beginning5:
	// Sign in
	if (yes_no == "yes" || yes_no == "Yes" || yes_no == "YES" || yes_no == "y" || yes_no == "Y")
	{
		cout << "\n\tEnter username: ";  cin >> account;
		cout << "\n\tEnter password: ";  cin >> password;
		if (account == accountlist && password == accountpassword)
		{
			cout << "\n\tYou have successfully signed in !" << endl;
		}
		else
		{
			cout << "\n\tAccount is invalid !" << endl;
			goto beginning5;
		}
	}
	// Sign up
	else if (yes_no == "no" || yes_no == "No" || yes_no == "NO" || yes_no == "n" || yes_no == "N")
	{
		cout << "\n\tIn order to sign up you should create your username and password.\t\t\t\t\t\t"; 
		cout << "| Username must be at least 8 characters ! |\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t| Password must include only numbers !     | " << endl;;
	beginning3:
		cout << "\n\tEnter username: ";
		cin >> account;
	beginning4:
		cout << "\n\tEnter password: ";
		cin >> password;
		if (account.length() < 8) {
			cout << "\n\tYour account length must be more than 8 characters: ";
			goto beginning3;
		}
		if (account == accountlist) {
			cout << "\n\tAccount with this username already exists please try another username: ";
			goto beginning3;
		}
		if (!isNum(password))
		{
			cout << "\n\tYour password must include only numbers !\n";
			goto beginning4;
		}
	}
	else
	{
		cout << "\n\tSomething went wrong, try again !" << endl;
		goto signin;
	}
}

// Getting information about applicant and output final results
void details() {
	string name;
	string surname;
	string email;
	string date;
	string phone_num;
	string phone_num2;
	string passport;
	float ielts;
	int choice, choice2, choice3, choice4;
	int a = 1, b = 1, c = 1, d = 0;
	// Getting information from an applicant
	name:
	cout << "\n\tEnter your name: ";
	cin >> name;
	// Checking for right name writing 
	if (isLetter(name) || name.length() < 2)
	{
		cout << "\n\tWrong input ! Your name must consist of only letters and be more than 2 letters !";
		goto name;
	}
	surname:
	cout << "\n\tEnter your surname: ";
	cin >> surname;
	// Checking for right surname writing 
	if (isLetter(surname))
	{
		cout << "\n\tWrong input ! Your surname must consist of only letters !";
		goto surname;
	}
	// Checking for right data writing
	do {
		cout << "\n\tEnter your date of birth like DD.MM.YYYY: ";
		cin >> date;
		if (date.length() == 10)
			a = 0;
		else
			cout << "\n\tWrong input !";
	} while (a != 0);
	// Checking for right phone number writing
	do {
		cout << "\n\tEnter your phone number: +998 ";
		cin >> phone_num;
		if (phone_num.length() == 9 && isNum(phone_num))
		{
			b = 0;
		}
		else
			cout << "\n\tPhone number must consist of only 9 numbers ! Like this: +998 ** *** ** **\n\n";
	} while (b != 0);
	// Checking for right additional phone number writing
	do {
		cout << "\n\tEnter additional phone number: +998 ";
		cin >> phone_num2;
		if (phone_num == phone_num2)
			cout << "\n\tAdditional phone number must not be the same with yours !";
		else if (phone_num2.length() == 9 && isNum(phone_num2))
		{
			c = 0;
		}
		else
			cout << "\n\tPhone number must consist of only 9 numbers ! Like this: +998 ** *** ** **\n\n";
	} while (c != 0);
	cout << "\n\tEnter your email: ";
	cin >> email;
	cout << "\n\tEnter your passport serial number: ";
	cin >> passport;
	ielts:
	cout << "\n\tEnter your IELTS score: ";
	cin >> ielts;
	// Checking for right IELTS score input
	do
	{
		if (ielts <= 0 || ielts > 9)
		{
			cout << "\n\tWrong input, try again !";
			goto ielts;
		}
		else
			d = 1;
	}while(d != 1);
	system("CLS");
	cout << "\n\tThank you for registration !";
	cout << "\n\tDear " << name << " " << surname << " !" << endl;
	cout << "\n\tYour birthday date is '" << date << "' and your passport series is '" << passport << "' press '1' to continue or '0' to quit. -->\t";
	cin >> choice;
	// IELTS score information
starting:
	if (choice == 1) {
		system("CLS");
		cout << "\n\tIF IELTS SCORE IS 5.5 OR LESS: SIMPLE TEST" << endl;
		cout << "\n\tIF IELTS SCORE IS BETWEEN 5.5 AND 7: PASSED ON CONTRACT BASED STUDY" << endl;
		cout << "\n\tIF IELTS SCORE IS MORE THAN 7: PASSED ON SCOLARSHIP BASED STUDY" << endl;
		cout << "\n\tYOUR IELTS SCORE IS: " << ielts << " AND YOU ARE ALLOWED TO ";
		// IELTS less than 5.5
		if (ielts <= 5.5) {
		starting1:
			cout << "TO TAKE TEST RIGHT HERE, PRESS '1' TO START: ";
			cin >> choice2;
			system("CLS");
			// Testing an applicant
			if (choice2 == 1) {
				cout << "\n\n\t\t\tNOW LET'S START OUR TEST\n";
				// First question
			test1:
				char option1;
				cout << "\n\t1. Her thinking leans ___ democracy." << endl;
				cout << "\n\tA) with";
				cout << "\n\tB) for";
				cout << "\n\tC) towards";
				cout << "\n\tD) None of these";
				cout << "\n\tInput the correct answer: ";
				cin >> option1;
				// Verification and display of results (1st question)
				if (option1 == 'C') {
					cout << "\n\tOK, your answer is correct let's continue." << endl;
				}
				else if (option1 == 'A' || option1 == 'B' || option1 == 'D') {
					cout << "\n\tYour answer is incorrect let's continue." << endl;
				}
				else
					goto test1;
				// Second question
			test2:
				system("CLS");
				char option2;
				cout << "\n\t2. He got too tired ___ over work." << endl;
				cout << "\n\tA) because of " << endl;
				cout << "\n\tB) because off " << endl;
				cout << "\n\tC) on " << endl;
				cout << "\n\tD) for " << endl;
				cout << "\n\tInput the correct answer: ";
				cin >> option2;
				// Verification and display of results (2nd question)
				if (option2 == 'A') {
					cout << "\n\tOK your answer is correct let's continue." << endl;
					system("CLS");
				}
				else if (option2 == 'D' || option2 == 'C' || option2 == 'B') {
					cout << "\n\tYour answer is not correct let's continue." << endl;
					system("CLS");
				}
				else
					goto test2;
				// Third question
			test3:
				char option3;
				cout << "\n\t3. ___ his principles, he has to be very careful" << endl;
				cout << "\n\tA) Although" << endl;
				cout << "\n\tB) Additionally" << endl;
				cout << "\n\tC) By the way" << endl;
				cout << "\n\tD) With regard to" << endl;
				cout << "\n\tInput the correct answer: ";
				cin >> option3;
				// Verification and display of results (3rd question)
				if (option3 == 'D') {
					cout << "\n\tOK your answer is correct let's continue." << endl;
				}
				else if (option3 == 'A' || option3 == 'B' || option3 == 'C') {
					cout << "\n\tYour answer is not correct let's continue." << endl;
				}
				else
					goto test3;
				system("CLS");
				// Output test results
				if (option1 == 'C' && option2 == 'A' && option3 == 'D') {
					cout << "\n\tTotally you solved 3/3 questions" << endl;
					cout << "\n\tCongratulations " << name << " ! You have successfully passed the Entrance Exam and have received admission to our university !\n\n\t";
					cout << "\n\tType '1' to open a message --> ";
					choice3 = 0;
					do {
						cin >> choice3;
					} while (choice3 != 1);
					system("CLS");
					message();
				}
				else if (option1 == 'C' && option2 == 'A') {
					cout << "\n\tTotally you solved 2/3 questions" << endl;
					cout << "\n\tCongratulations " << name << " ! You have successfully passed the Entrance Exam and have received admission to our university !\n\n\t";
					cout << "\n\tType '1' to open a message --> ";
					choice3 = 0;
					do {
						cin >> choice3;
					} while (choice3 != 1);
					system("CLS");
					message();
				}
				else if (option1 == 'C' && option3 == 'D') {
					cout << "\n\tTotally you solved 2/3 questions" << endl;
					cout << "\n\tCongratulations " << name << " ! You have successfully passed the Entrance Exam and have received admission to our university !\n\n\t";
					cout << "\n\tType '1' to open a message --> ";
					choice3 = 0;
					do {
						cin >> choice3;
					} while (choice3 != 1);
					system("CLS");
					message();
				}
				else if (option3 == 'D' && option2 == 'A') {
					cout << "\n\tTotally you solved 2/3 questions" << endl;
					cout << "\n\tCongratulations " << name << " ! You have successfully passed the Entrance Exam and have received admission to our university !\n\n\t";
					cout << "\n\tType '1' to open a message --> ";
					choice3 = 0;
					do {
						cin >> choice3;
					} while (choice3 != 1);
					system("CLS");
					message();
				}
				else if (option1 == 'C' || option2 == 'A' || option3 == 'D') {
					cout << "\n\tTotally you solved 1/3 questions" << endl;
					cout << "\n\tSorry " << name << " but you have not passed our admission. We hope that we will see you in the next year. \n\n\t";
				}
				else
					goto starting1;
			}
		}
		// IELTS more than 5.5 and less than 7
		else if (ielts > 5.5 && ielts < 7) {
			cout << "STUDY IN OUR UNIVERSITY ON CONTRACT BASED STUDY, PRESS '1' IF YOU ARE AGREE -->";
			cin >> choice2;
			if (choice2 == 1) {
				system("CLS");
				cout << "\n\tCongratulations " << name << " ! You have successfully received admission to our university ! (Contract based)\n\n\t";
				cout << "\n\tType '1' to open a message --> ";
				choice3 = 0;
				do {
					cin >> choice3;
				} while (choice3 != 1);
				system("CLS");
				message();
			}
			else
				goto starting;
		}
		// IELTS more than 7 up to 9
		else if (ielts >= 7 && ielts <= 9) {
			cout << "STUDY IN OUR UNIVERSITY ON SCOLARSHIP BASED STUDY, PRESS '1' IF YOU ARE AGREE: ";
			cin >> choice2;
			if (choice2 == 1) {
				system("CLS");
				cout << "\n\tCongratulations " << name << " ! You have successfully received admission to our university ! (Scolarship based)\n\n\t";
				cout << "\n\tType '1' to open a message --> ";
				choice3 = 0;
				do {
					cin >> choice3;
				} while (choice3 != 1);
				system("CLS");
				message();
			}
		}
		else
			goto starting;
		}
	else if (choice == 0)
		goto starting1;
	else
		goto starting;
}
// Invitation an applicant to 'Orientation Day'
void message()
{
	cout << "\n\tDear student of IUT ! We invite you to the 'Orientation Day' ZOOM meeting !";
	cout << "\n\n\tGet ready and enter the ZOOM meeting room by 10:50 12th April 2021(for the OT), start through the link below."
		<< "\n\n\tBe punctual with your entrance. No late comers will be allowed in !\n\t"
		<< "\n\n\tZOOM Link : https://inha/zoom/link."
		<< "\n\n\tIf You fail to follow the instructions from the proctors for any reason in the ZOOM meeting, you will be disqualified.\n"
		<< "\n\tSo please make sure to comply with the instructions from the proctors at all times through the meeting. Thank you !";
	// Printing gratitude :)
	for (int i = 0; i < 7; i++)
		cout << "\n";
	for (int i = 0; i < 8; i++)
		cout << "\t";
	cout << "Thank you for attention !";
	for (int i = 0; i < 7; i++)
		cout << "\n";
}
int main() {
	welcome();
	sign_in();
	// Admissions's page 
beginning:
	system("CLS");
	cout << "\t\t\t\t\t\t\t\t\t      W";
	Sleep(200);
	system("CLS");
	cout << "\t\t\t\t\t\t\t\t\t      WE";
	Sleep(200);
	system("CLS");
	cout << "\t\t\t\t\t\t\t\t\t      WEL";
	Sleep(200);
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELC");
	Sleep(200);
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELCO");
	Sleep(200);
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELCOM");
	Sleep(200);
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELCOME");
	Sleep(200);
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELCOME ");
	Sleep(200);
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELCOME T");
	Sleep(200);
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELCOME TO");
	Sleep(300);
	string choice;
	string choice1;
	string choice2;
	int e;
	system("CLS");
	cout << ("\t\t\t\t\t\t\t\t\t      WELCOME TO");
	cout << "\n\t\t\t\t\t\t\t\t\t      ADMISSIONS\n";
	cout << "\n\t\t\t\t\t     DEPARTMENT\t\t\t\t\t\t\t\t     DEPARTMENT\n";
	cout << "\n\t\t\t\t\t BUSINESS MANAGEMENT\t\t\t\t\t\t\tINFORMATION TECHNOLOGY\n";
	cout << "\n\n\n\t\t\t\t\t\t\t      PRESS '1' TO CHOOSE BUSINESS MANAGEMENT DEPARTMENT\n\n";
	cout << "\t\t\t\t\t\t\t      PRESS '2' TO CHOOSE INFORMATION TECHNOLOGY DEPARTMENT\n\n\n\t";
	cin >> choice;
	// Business Management Page 
	if (choice == "1") {
	myone:
		system("CLS");
		cout << "\n\t\t\t\t\t\t\t      YOU HAVE CHOSEN BUSINESS MANAGEMENT\n";
		cout << "\n\n\t\t\t\t\t\t\t      IF YOU WANT TO CONTINUE PRESS '1'";
		cout << "\n\n\n\n\n\n\t\t\t\t\t      WARNING! IF YOU CHOSE WRONG DEPARTMENT, PLEASE PRESS '0' TO RETURN\n\n\n\t";
		cin >> choice1;
		// Choice to go back to choose faculty
		if (choice1 == "0") {
			goto beginning;
		}
		// Choice to apply for study
		else if (choice1 == "1") {
			system("CLS");
			cout << "\t\t\t\t\t\t      BUSINESS MANAGEMENT DEPARTMENT" << endl;
			details();
		}
		else if (!isLetter(choice) == true)
		{
			cout << "\n\tWrong input, please input '0' or '1' ! \n\n\tType '1' to go back to Admssion page --->";
			cin >> e;
			system("CLS");
			goto myone;
		}
	}
	// IT page
	else if (choice == "2") {
	beginning1:
		system("CLS");
		cout << "\n\t\t\t\t\t\t\t      YOU HAVE CHOSEN IT\n";
		cout << "\n\n\t\t\t\t\t\t\tIF YOU WANT TO CONTINUE PRESS '1'";
		cout << "\n\n\n\n\n\n\t\t\t\t\t      WARNING! IF YOU CHOSE WRONG DEPARTMENT, PLEASE PRESS '0' TO RETURN\n\n\n\t";
		cin >> choice2;
		// Choice to go back to choose faculty
		if (choice2 == "0") {
			goto beginning;
		}
		// Choice to apply for study
		else if (choice2 == "1")
		{
			system("CLS");
			cout << "\t\t\t\t\t\t\t      IT DEPARTMENT" << endl;
			details();
		}
		else if (!isLetter(choice) == true)
		{
			cout << "\n\tWrong input, please input '0' or '1' ! \n\n\tType '1' to go back to Admssion page --->";
			cin >> e;
			system("CLS");
			goto beginning1;
		}
	}
	else if(!isLetter(choice) == true)
	{
		cout << "\n\tWrong input, please input '0' or '1' ! \n\n\tType '1' to go back to Admssion page --->";
		cin >> e;
		system("CLS");
		goto beginning;
	}
	system("pause");
	return 0;
}
// Function for checking whether string is numeric or not
bool isNum(string str) {
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false; //when one non numeric value is found, return false
	return true;
}
// Function to check whether letter 
bool isLetter(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (find_if(s.begin(), s.end(), isdigit) != s.end()) // condition for cheking whether string has digit or not
			return true;
		else if (find_if(s.begin(), s.end(), isalpha) != s.end() || s[i] == '94') // condition for cheking whether string has letter and space or not
			return false;
	}
	return true;
}
