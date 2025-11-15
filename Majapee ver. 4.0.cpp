#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

string pname[76] = {"Large Summer ... (Maroon)", "Large Summer B... (Black)", "Large Summer Ba... (Pink)", "Large Summer B... (White)", "Large Summer Ba... (Gray)", "Black Loose Spring... (S)", "Black Loose Spring... (M)", "Black Loose Spring... (L)", "Black Loose Sprin... (XL)", "Dark Blue Loose Sp... (S)", "Dark Blue Loose Sp... (M)", "Dark Blue Loose Sp... (L)", "Dark Blue Loose S... (XL)", "Straight Cut D... (Black)", "Black Vintage Buck... (S)", "Black Vintage Buck... (M)", "Black Vintage Buck... (L)", "Dark Blue Vintage ... (S)", "Dark Blue Vintage ... (M)", "Dark Blue Vintage ... (L)", "Apricot Loose Hara... (S)", "Apricot Loose Hara... (M)", "Apricot Loose Hara... (L)", "Black Loose Haraju... (S)", "Black Loose Haraju... (M)", "Black Loose Haraju... (L)", "Baggy Sweatpants  (Green)", "Baggy Sweatpants  (Black)", "Acer Nitro 5 I... (Black)", "DJI  Mini 3  Pro  (White)", "128GB Samsung ... (White)", "128GB Samsung G... (Gold)", "128GB Samsung ... (Black)", "10-piece Korea... (White)", "10-piece Korea... (Black)", "10-piece K... (Turquoise)", "180ml Palm... (Aloe Vera)", "180ml ... (Coconut Cream)", "180ml Palmol... (Keratin)", "25ml Rexona... (Ice Cool)", "25ml Rex... (Quantum Dry)", "CK Be Eau De T... (100ml)", "15g Double Dew... (Ivory)", "15g Double D... (Natural)", "Gold Intense An... (50ml)", "Mechanical Air... (Black)", "Refri... (Metal Graphite)", "Kettl... (Metal Graphite)", "Organic Maca Powder (4oz)", "Organic Cacao Po... (8oz)", "Exeter Corned Beef (12oz)", "The Legend of Zelda: B...", "The Legend of Zelda: L...", "Mastersword  Link   Sword", "Pull Up Statio... (Black)", "Boxing Bag Stand  (Black)", "4lbs Dumbbell ... (Black)", "4lbs Dumbbell ... (Green)", "4lbs Muscle Dumb... (Red)", "Off  White  Sneakers  (6)", "Off  White  Sneakers  (7)", "Off  White  Sneakers  (8)", "Black    Sneakers     (6)", "Black    Sneakers     (7)", "Black    Sneakers     (8)", "Messenger Shou... (Brown)", "Messenger Shou... (Khaki)", "Messenger Shoul... (Blue)", "Tote  Bag  (Chess  Black)", "Tote     Bag      (Black)", "Tote  Bag  (Kyoot  Black)", "Pendant Necklace  (Black)", "Pendant Necklace  (Steel)", "Pendant Necklace   (Blue)", "Roy  CZ  Necklace  (Gold)", "Culpo Ne... (16.5in-19in)"};
float price[33] = {135.00, 114.00, 287.00, 204.00, 332.00, 91.00, 60000.00, 50000.00, 61927.00, 33.00, 130.00, 33.00, 1683.00, 657.00, 1807.00, 5928.00, 20000.00, 828.00, 459.00, 668.00, 2340.00, 2630.00, 782.00, 2340.00, 3350.00, 8000.00, 400.00, 1500.00, 625.00, 100.00, 600.00, 800.00, 1000.00};

void loading() {
	system("cls"); 
	cout << "\n *";
	cout << "\n Loading .";
	cout << "\n *";
    Sleep(250);
    system("cls");
    cout << "\n **";
	cout << "\n Loading . .";
	cout << "\n **";
    Sleep(250);
    system("cls");
    cout << "\n ***";
	cout << "\n Loading . . .";
	cout << "\n ***";
    Sleep(250);
    system("cls");
    cout << "\n ****";
	cout << "\n Loading .";
	cout << "\n ****";
    Sleep(250);
    system("cls");
    cout << "\n *****";
	cout << "\n Loading . .";
	cout << "\n *****";
    Sleep(250);
    system("cls");
    cout << "\n ******";
	cout << "\n Loading . . .";
	cout << "\n ******";
    Sleep(250);
    system("cls");
    cout << "\n *******";
	cout << "\n Loading .";
	cout << "\n *******";
    Sleep(250);
    system("cls");
    cout << "\n ********";
	cout << "\n Loading . .";
	cout << "\n ********";
    Sleep(250);
    system("cls");
    cout << "\n *********";
	cout << "\n Loading . . .";
	cout << "\n *********";
	Sleep(250);
    system("cls");
    cout << "\n **********";
	cout << "\n Loading .";
	cout << "\n **********";
	Sleep(250);
    system("cls");
    cout << "\n ***********";
	cout << "\n Loading . .";
	cout << "\n ***********";
	Sleep(250);
    system("cls");
    cout << "\n ************";
	cout << "\n Loading . . .";
	cout << "\n ************";
	Sleep(250);
    system("cls");
    cout << "\n *************";
	cout << "\n Loading .";
	cout << "\n *************";
	Sleep(500);
    system("cls");
    cout << "\n **************";
	cout << "\n Loading . .";
	cout << "\n **************";
	Sleep(500);
    system("cls");
    cout << "\n ***************";
	cout << "\n Loading . . .";
	cout << "\n ***************";
	Sleep(2000);
    system("cls");
    cout << "\n ****************";
	cout << "\n Loading Complete";
	cout << "\n ****************";
}

void login(string un, string pw, int& att){              
    int again1, again2;
    string user, pass;
    system ("cls");
    do {
    	cin.ignore();
    	cout << "\n\t\t\t   Enter Username\n";
    	cout << "\t\t\t\t\t : ";
    	getline(cin,user); 
    	if (user.empty()) { 		// username required 
    		cout << "\t\t\t   Username required."; 
    		getch(); 
    		system("cls"); 
		} 
    	else if (user != un){	//invalid username 
			cout << "\t\t\t   Username does not exist. Please try again.\n";
			getch();
			system ("cls");
			}
			else {
				cout << "\n\t\t\t\t ___________________________________________\n";
				cout << "\t\t\t\t|\t\t\t\t\t    |\n";
				cout << "\t\t\t\t\tUser " << un << " found!\n";
				cout << "\t\t\t\t|___________________________________________|\n\n";
            	again1++;
            	}
    	} while (again1 == 0);
	for (att=1; att < 4; att++){
    do {
        cin.ignore();
        cout << "\t\t\t   Enter Password\n";
        cout << "\t\t\t\t\t : ";
        getline(cin,pass);
        if (pass.empty()) {		//password required 
        	cout << "\t\t\t   Password required."; 
        	getch(); 
        	system("cls"); 
		}
		else if (pass != pw){	//invalid password 
        	cout << "\t\t\t   Invalid Password. Please try again.\n\t\t\t   " << 3-att << " attempt/s left.\n";
        	if (att == 3 && pass != pw) {	//no attempts left 
        		att++; 
        		cout << "\n\t\t\t   Limit has reached!\n\t\t\t   Press Enter to exit the program and try again.\n"; 
        		getch();  
        		return; 
			}
        	getch();
        	continue; 
    	}
        	else {             
                cout << "\n\t\t\t\t ___________________________________________\n";
	    		cout << "\t\t\t\t|\t\t\t\t\t    |\n";
				cout << "\t\t\t\t\tPassword matched!\n";
				cout << "\t\t\t\t|___________________________________________|\n\n";
                getch();
                again2++;
                att == 5;
                return; 
                break;
            }
    } while (again2 == 0);
    }
}
     
void signup(string &un, string &pw){
	int again1, again2;
    system ("cls");
    cout << "\n\t\t\t\t\t     WELCOME, NEW USER!\n";
    do {
        cin.ignore();
        cout << "\n\t\t\t   Enter Username (min. of 6, max. of 15 characters only)\n";
        cout << "\t\t\t\t\t : ";
        getline(cin,un);
        if (un.length() < 6 || un.length() > 15){
        	cout << "\t\t\t   Invalid Username. Please try again.\n";;
        	getch();
        	system ("cls");
        	again1 = 0;
    		}
        	else {
        		again1++;
                }
        } while (again1 == 0);
    do {
        cin.ignore();
        cout << "\t\t\t   Enter Password (min. of 6, max. of 15 characters only)\n";
        cout << "\t\t\t\t\t : ";
        getline(cin,pw);
        if (pw.length() < 6 || pw.length() > 15){
        	cout << "\t\t\t   Invalid Password. Please try again.\n";
        	getch();
        	system ("cls");
        	again2 = 0;
        	}
        	else {
        		again2++;
        		}
        } while (again2 == 0);
        
    cout << "\n\t\t\t   Welcome, " << un << "! Please Log In afterwards to proceed.\n";
    }

void exit_program() {	//after receipt 
	cout << "\n\nOrder Completed!\n";
	cout << "Press any key to sign out and exit.";
	getch();  
}

void shop () {			// categories 
	system ("CLS");
	cout << "\n    _____________________________________________________________\n\n";
	cout << "\t\t\t      CATEGORIES\n";
	cout << "    _____________________________________________________________\n\n";
	cout << "[1] Men\'s Apparel\t\t\t[7] Groceries\n"; 
	cout << "[2] Women\'s Apparel\t\t\t[8] Collectibles,Toys & Games\n";
	cout << "[3] Gadgets, Mobiles & Computers\t[9] Sports & Workout\n";
	cout << "[4] Personal & Health care\t\t[10] Bags & Shoes\n";
	cout << "[5] Makeup & Perfumes\t\t\t[11] Jewelries\n";
	cout << "[6] Home Appliances\t\t\t[0] Exit\n"; 
}

void categ1() {			// 1 Men's Apparel 
	int prod;
    int prodstop = 0; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Large Summer Baseball Cap";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 135.00"; 
				cout << "\n\tStock: 230"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Cotton"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code:";
					cout << "\n\tMaroon \t\t#111" << "\n\tBlack \t\t#112" << "\n\tPink \t\t#113" << "\n\tWhite \t\t#114" << "\n\tGray\t\t#115"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Loose Spring Denim Jacket";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 114.00"; 
				cout << "\n\tStock: 210"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Denim"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code:"; 
					cout << "\n\tBlack \n\t   Small \t\t#121 \n\t   Medium \t\t#122 \n\t   Large \t\t#123 \n\t   Extra Large \t\t#124";
					cout << "\n\n\tDark Blue \n\t   Small \t\t#125 \n\t   Medium \t\t#126 \n\t   Large \t\t#127 \n\t   Extra Large \t\t#128";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS"); 
				cout << "\n_________________________________________________\n\n";
				cout << "   Straight Cut Denim Pants";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 287.00"; 
				cout << "\n\tStock: 250"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Denim"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tBlack \t\t#131";
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ2() {			// 2 Women's Apparel 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Vintage Bucket Hat";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 204.00"; 
				cout << "\n\tStock: 225"; 
				cout << "\n\tBrand: OEM"; 
				cout << "\n\tFormulation: Cotton"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\tBlack \n\t   Small \t\t#211 \n\t   Medium \t\t#212 \n\t   Large \t\t#213"; 
					cout << "\n\n\tDark Blue \n\t   Small \t\t#214 \n\t   Medium \t\t#215 \n\t   Large \t\t#216";
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Loose Harajuku Hoodie";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 332.00"; 
				cout << "\n\tStock: 200"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Cotton & Polyester"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\tApricot \n\t   Small \t\t#221 \n\t   Medium \t\t#222 \n\t   Large \t\t#223"; 
					cout << "\n\n\tBlack \n\t   Small \t\t#224 \n\t   Medium \t\t#225 \n\t   Large \t\t#226";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Baggy Sweatpants";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 91.00"; 
				cout << "\n\tStock: 310"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Cotton"; 
				cout << "\n\tShips From: Manila";
				cout << "\n\n\tVariation/s: \tProduct Code:"; 
					cout << "\n\tGreen \t\t#231" << "\n\tBlack \t\t#232";
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ3() {			// 3 Gadgets, Mobiles, Computers 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Acer Nitro 5 - Intel Core i5";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 60,000.00"; 
				cout << "\n\tStock: 512"; 
				cout << "\n\tBrand: Acer"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code:"; 
					cout << "\n\tBlack \t\t#311"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   DJI Mini 3 Pro";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 50,000.00"; 
				cout << "\n\tStock: 123"; 
				cout << "\n\tBrand: DJI"; 
				cout << "\n\tShips From: Manila";
				cout << "\n\n\tVariation/s: \tProduct Code: ";
					cout << "\n\tWhite \t\t#321";  
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Samsung Galaxy S22 Ultra";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 61,927.00"; 
				cout << "\n\tStock: 891";
				cout << "\n\tBrand: Samsung"; 
				cout << "\n\tShips From: Manila";
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\t128GB \n\t   White \t\t#331 \n\t   Gold \t\t#332 \n\t   White \t\t#333"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ4() {			// 4 Personal and Health Care 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   10-piece Korean Style Face Mask";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 33.00"; 
				cout << "\n\tStock: 701"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Cotton"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tWhite \t\t#411" << "\n\tBlack \t\t#412" << "\n\tTurquoise \t#413"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Palmolive Naturals Shampoo (180ml)";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 130.00"; 
				cout << "\n\tStock: 528"; 
				cout << "\n\tBrand: Palmolive"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\tAloe Vera \t\t#421" << "\n\tCoconut Cream \t\t#422" << "\n\tKeratin \t\t#423"; 
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Rexona Men Deodorant (25ml)";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 33.00"; 
				cout << "\n\tStock: 701"; 
				cout << "\n\tBrand: Rexona"; 
				cout << "\n\tShips From: Manila";
				cout << "\n\n\tVariation/s: \tProduct Code:"; 
					cout << "\n\tIce Cool \t\t#431" << "\n\tQuantum Dry \t\t#432"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ5() {			// 5 Makeup and Perfumes 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   CK Be Eau De Toilette Spray";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 1,683.00"; 
				cout << "\n\tStock: 112"; 
				cout << "\n\tBrand: Calvin Klein"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\t100ml \t\t#511"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Double Dewy CC Cushion - Refill Pack (15g)";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 657.00"; 
				cout << "\n\tStock: 365"; 
				cout << "\n\tBrand: Dewha"; 
				cout << "\n\tFormulation: Cotton"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tIvory \t\t#521" << "\n\tNatural \t#522";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Gold Intense Anti-aging Daily Serum";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 1,807.00";
				cout << "\n\tStock: 258"; 
				cout << "\n\tBrand: Dewha"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\t50ml \t\t#531"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ6() {			// 6 Home Appliances 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Mechanical Air Fryer";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 5,928.00"; 
				cout << "\n\tStock: 709"; 
				cout << "\n\tBrand: Midea"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tBlack \t\t#611"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Top Mount Refrigerator with Moist Fresh Zone\n   7.4 cu.ft.";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 20,000.00"; 
				cout << "\n\tStock: 430"; 
				cout << "\n\tBrand: Samsung"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\tMetal Graphite \t\t#621";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Hanabishi Stainless Steel Electric Kettle";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 828.00";
				cout << "\n\tStock: 348"; 
				cout << "\n\tBrand: Hanabishi"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\tMetal Graphite \t\t#631"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ7() {			// 7 Groceries 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Organic Maca Powder";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 459.00"; 
				cout << "\n\tStock: 2981"; 
				cout << "\n\tBrand: Navitas Organics"; 
				cout << "\n\tFormulation: Maca"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\t4oz \t\t#711"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Organic Cacao Powder";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 668.00"; 
				cout << "\n\tStock: 1290"; 
				cout << "\n\tBrand: Navitas Organics"; 
				cout << "\n\tFormulation: Cacao"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\t8oz \t\t#721";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Exeter Corned Beef";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 2,340.00";
				cout << "\n\tStock: 983"; 
				cout << "\n\tBrand: Exeter"; 
				cout << "\n\tFormulation: Beef"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\t12oz \t\t#731"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ8() {			// 8 Collectibles, Toys, Games
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   The Legend of Zelda: Breathe of the Wild";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 2,630.00"; 
				cout << "\n\tStock: 129"; 
				cout << "\n\tBrand: Nintendo"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tProduct Code: "; 
					cout << "\n\t#811"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   The Legend of Zelda: Link Action Figure Toy";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 782.00"; 
				cout << "\n\tStock: 391"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Plastic"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tProduct Code: "; 
					cout << "\n\t#821";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Mastersword Link Sword";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 2,340.00";
				cout << "\n\tStock: 983"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Plastic"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tProduct Code: "; 
					cout << "\n\t#831"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ9() {			// 9 Sports and Workout 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Adjustable Pull Up Station";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 3,350.00"; 
				cout << "\n\tStock: 115"; 
				cout << "\n\tBrand: Unbraded"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tBlack \t\t#911"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Boxing Bag Stand";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 8,000.00"; 
				cout << "\n\tStock: 139"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tBlack \t\t#921";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Muscle Power Vinyl Dumbbell (4lbs)";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 400.00";
				cout << "\n\tStock: 398"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tBlack \t\t#931" << "\n\tGreen \t\t#932" << "\n\tRed \t\t#933"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ10() {		// 10 Bags and Shoes 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Sneakers";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 1,500.00"; 
				cout << "\n\tStock: 394"; 
				cout << "\n\tBrand: Uniqlo"; 
				cout << "\n\tFormulation: Canvas"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tOff White \n\t   6 \t\t#1011 \n\t   7 \t\t#1012 \n\t   8 \t\t#1013";
					cout << "\n\n\tBlack \n\t   6 \t\t#1014 \n\t   7 \t\t#1015 \n\t   8 \t\t#1016";
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Messenger Shoulder Bag";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 625.00"; 
				cout << "\n\tStock: 592"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Canvas"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tBrown \t\t#1021" << "\n\tKhaki \t\t#1022" << "\n\tBlue \t\t#1023";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Tote Bag";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 100.00";
				cout << "\n\tStock: 990"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Katsa"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\tChess Black \t\t#1031" << "\n\tBox Black \t\t#1032" << "\n\tKyoot Black \t\t#1033";
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void categ11() {		// 11 Jewelry 
	int prod, prodstop; 
	do {
		cout << "\nSelect product: "; 
		cin >> prod; 
		switch (prod){	//switch product 
			case 1: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Pendant Necklace";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 600.00"; 
				cout << "\n\tStock: 210"; 
				cout << "\n\tBrand: Unbranded"; 
				cout << "\n\tFormulation: Tungsten Carbide (Weight) 25g (Length) 50cm";
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tBlack \t\t#1111" << "\n\tSteel \t\t#1112" << "\n\tBlue \t\t#1113"; 
				prodstop++; 
				break; 
			case 2: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Roy CZ Necklace";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 800.00"; 
				cout << "\n\tStock: 192"; 
				cout << "\n\tBrand: Roy CZ"; 
				cout << "\n\tFormulation: 18K Gold Vermeil"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \tProduct Code: "; 
					cout << "\n\tGold \t\t#1121";
				prodstop++; 
				break; 
			case 3: 
				system ("CLS");
				cout << "\n_________________________________________________\n\n";
				cout << "   Culpo Necklace";
				cout << "\n_________________________________________________\n\n";
				cout << "\n\tPrice: PHP 1,000.00";
				cout << "\n\tStock: 120"; 
				cout << "\n\tBrand: Culpo"; 
				cout << "\n\tFormulation: 18K Gold Coated on Brass"; 
				cout << "\n\tShips From: Manila"; 
				cout << "\n\n\tVariation/s: \t\tProduct Code: "; 
					cout << "\n\t16.5in-19in \t\t#1131"; 
				prodstop++;
				break; 
			default: 
				cout << "Invalid Input.\n"; 
            	continue; 
		}
	}
	while (prodstop == 0); 
	return; 
}

void shop_categ(int& categ) {		// Product lists 
	int categstop; 
	default_categ: 	//LOOP default case 
	cout << "\nSelect category: ";
	cin >> categ;
	do {
		 
		switch (categ) {
		case 1:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t    MEN'S APPAREL\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] Large Summer Baseball Cap\n";
			cout << "\t\[2] Loose Spring Denim Jacket\n";
			cout << "\t[3] Straight Cut Denim Pants\n"; 
			categ1(); 
			categstop++;
			break; 
		case 2:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t   WOMEN'S APPAREL\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] Vintage Bucket Hat\n";
			cout << "\t[2] Loose Harajuku Hoodie\n";
			cout << "\t[3] Baggy Sweatpants\n"; 
			categ2(); 
			categstop++;
			break;
		case 3:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t     GADGETS, MOBILE & COMPUTERS\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] Acer Nitro 5 - Intel Core i5\n";
			cout << "\t[2] DJI Mini 3 Pro\n";
			cout << "\t[3] Samsung Galaxy S22 Ultra\n"; 
			categ3(); 
			categstop++;
			break;
		case 4:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\tPERSONAL & HEALTHCARE\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] 10-piece Korean Style Face Mask\n";
			cout << "\t[2] Palmolive Naturals Shampoo (180ml)\n";
			cout << "\t[3] Rexona Men Deodorant (25ml)\n"; 
			categ4(); 
			categstop++;
			break;
		case 5:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t  MAKEUP & PERFUME\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] CK Be Eau De Toilette Spray\n";
			cout << "\t[2] Double Dewy CC Cushion - Refill Pack (15g)\n";
			cout << "\t[3] Gold Intense Anti-aging Daily Serum\n"; 
			categ5(); 
			categstop++;
			break;
		case 6:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t  HOME APPLIANCES\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] Mechanical Air Fryer\n";
			cout << "\t[2] 7.4 cu.ft. Top Mount Refrigerator with Moist Fresh Zone\n";
			cout << "\t[3] Hanabishi Stainless Steel Electric Kettle\n"; 
			categ6(); 
			categstop++;
			break; 
		case 7:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t      GROCERIES\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] Organic Maca Powder\n";
			cout << "\t[2] Organic Cacao Powder\n";
			cout << "\t[3] Exeter Corned Beef\n"; 
			categ7(); 
			categstop++;
			break; 
		case 8:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t     COLLECTIBLES, TOY & GAMES\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] The Legend of Zelda: Breathe of the Wild\n";
			cout << "\t[2] The Legend of Zelda: Link Action Figure Toy\n";
			cout << "\t[3] Mastersword Link Sword\n"; 
			categ8(); 
			categstop++;
			break; 
		case 9:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t  SPORTS & WORKOUT\n";
			cout << "    _____________________________________________________________\n\n"; 
			cout << "\t[1] Adjustable Pull Up Station\n";
			cout << "\t[2] Boxing Bag Stand\n";
			cout << "\t[3] Muscle Power Vinyl Dumbbell (4lbs)\n"; 
			categ9(); 
			categstop++;
			break; 
		case 10:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t     BAGS & SHOES\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] Sneakers\n";
			cout << "\t[2] Messenger Shoulder Bag\n";
			cout << "\t[3] Tote Bag\n"; 
			categ10(); 
			categstop++;
			break; 
		case 11:
			system ("CLS");
			cout << "\n    _____________________________________________________________\n\n";
			cout << "\t\t\t      JEWELRIES\n";
			cout << "    _____________________________________________________________\n\n";
			cout << "\t[1] Pendant Necklace\n";
			cout << "\t[2] Roy CZ Necklace\n";
			cout << "\t[3] Culpo Necklace\n"; 
			categ11(); 
			categstop++;
			break; 
		case 0: 
			return;  //return mainTWO 
		default: 
			cout << "Invalid Input. Please try again.\n";
			getch(); 
			system("CLS"); 
			shop(); //display categs 
			goto default_categ; 
		}
	}
	while (categstop == 0); 
}

void bill_address(float& totalprice){	//Address and Vouchers 
     system("cls");
     loading(); 	//loading 
     int rnum, pnum, cnum;
     char correct;
     int cr, shipping;
     string y, brgy, street, hnum, city, province, td;
    
    string region[6]= {"", "South Luzon", "North Luzon", "Metro Manila", "Visayas", "Mindanao"};
    string SLProv[18] = {"", "Palawan", "Catanduanes", "Cavite", "Laguna", "Sorsogon", "Masbate", "Romblon", "Rizal", "Camarines Norte", "Marinduque", "Quezon", "Batangas", "Aurora", "Oriental Mindoro", "Albay", "Camarines Sur", "Occidental Mindoro"};
    string NLProv[23] = {"", "Nueva Ecija" , "Pampanga", "Ilocos Sur", "Abra", "Pangasinan", "Apayao", "Aurora", "Kalinga", "Kalinga", "Isabela", "Ifugao", "Bulacan", "Benguet", "Mountain Province", "Bataan", "Cagayan", "Zambales", "Quirino", "La Union", "Nueva Vizcaya", "Ilocos Norte", "Batanes"};
    string MMProv[2] = {"", "Metro Manila"};
    string VProv[18] = {"", "Northern Samar", "Antique", "Soutern Leyte", "Guimaras", "Dinagat Island", "Leyte", "Negros Occidental", "Cebu", "Capiz", "Biliran", "Siquijor", "Eastern Samar", "Western Samar", "Bohol", "Negros Oriental", "Aklan", "Iloilo"};
    string MProv[28] = {"","Basilan", "Surigao Del Sur", "Lanao Del Sur", "Agusan Del Sur", "North Cotabato", "Davao Del Sur", "Lanao Del Norte", "South Cotabato", "Davao Del Norte", "Surigao Del Norte", "Dinagat Island", "Compostela Valley", "Zamboanga Del Sur", "Bukidnon", "Tawi-tawi", "Agusan Del Norte", "Zamboanga Del Norte", "Camiguin", "Misamis Oriental", "Sarangani", "Misamis Occidental", "Sulu", "Maguindanao", "Cotabato", "Davao Oriental", "Zamboaga Sibugay", "Sultan Kudarat"};
//South Luzon
    string Palawan[25] = {"","Aborlan", "Agutaya"," Araceli", "Balabac"," Batarza", "Brooke's Point "," Busuanga", "Cagayancillo", "Coron", "Culion", " Cuyo", "Dumaran", "El Nido", "Kalayaan", "Linapacan", "Magsaysay", " Narra", "Puerto Princesa City", " Quezon", "Rizal", " Roxas", "San Vincente", "Sofronio Espanola", "Taytay"};
    string Catanduanes[13] = {"","Baras", "Bato", "Bayamonoc", "Camoran", "Gigmoto", "Pandan", "Panganiban", "San Andres", "San Miguel", "Viga", "Virac"};
    string Cavite[26] = {"","Alfonso", "Amadeo", "Bacoor", "Carmona", "Cavite City", "Dasmarinas City", "General Emilio Aguinaldo", "General Trias", "Imus", "Indang", "Kawit", "Magallanes", "Maragondon", "Mariano Alvarez", "Mendez", "Naic", "Novelata", "Rosario", "Silang", "Tagaytay City", "Tanza", "Ternate", "Trece Martines City"};
    string Laguna[31] = {"", "Calamba City", "Alaminos" , "Bay", "Binan City", "Cabuyao", "Calauan", "Cavinti", "Famy", "Kalayaan", "Liliw", "Los Banos", "Luisiana", "Lumban", "Mabitac", "Magdalena", "Majayjay", "Nagcarlan", "Paete", "Pagsanjan", "Pakil", "Pangil", "Pila", "Rizal", "San Pablo City", "San Pedro", "Santa Cruz", "Santa Maria", "Santa Rosa City", "Siniloan", "Victoria"};
    string Sorsogon[16] = {"", "Barcelona", "Bulan", "Bulusan", "Casiguran", "Castilla", "Donsol", "Gubat", "Irosin", "Juban", "Magallanes", "Matnog", "Pilar", "Prieto Diaz", "Santa Magdalena", "Sorsogon City"};
    string Masbate[22] = {"", "Aroroy", "Baleno", "Balud", "Batuan", "Cataingan", "Cawayan", "Claveria", "Dimasalang", "Esperanza", "Mandaon", "Masbate City", "Milagros", "Mobo", "Monreal", "Palanas", "Pio V. Corpuz", "Placer", "San Fernando", "San Jacinto", "San Pascual", "Uson"};
    string Romblon[19] = {"", "Conception", "Alcantara", "Banton", "Cajidiocan", "Calatrava", "Corcuera", "Ferrol", "Looc", "Magdiwang", "Odiongan", "Romblon", "San Agustin", "San Andres", "San Jose", "San Fernando", "Santa Fe", "Santa Maria"};
    string Rizal[15] = {"", "Angono" , "Antipolo City", "Baras", "Binangonan", "Cainta", "Cardona", "Jala-jala", "Morong", "Pililla", "Rodriquez", "San Mateo", "Tanay", "Taytay", "Teresa"};
    string CamarinesNorte[13] = {"", "Basud",  "Capalonga", "Daet",  "Jose Panganiban",  "Labo",  "Mercedes",  "Paracale",  "San Lorenzo Ruiz",  "San Vicente",  "Santa Elena",  "Talisay",  "Vinzons"};
    string Marinduque[7] = {"", "Boac", "Buenavista", "Gasan", "Mogpog",  "Santa Cruz",  "Torrijos"};
    string Quezon[42] = {"", "Agdangan", "Alabat", "Atimonan", "Buenavista",  "Burdeos",  "Calauag",  "Candelaria",  "Catanauan",  "Dolores",  "General Luna",  "General Nakar", "Guinayangan", "Gumaca", "Infanta",  "Jomalig",  "Lopez",  "Lucban",  "Lucena City",  "Macalelon",  "Mauban",  "Mulanay",  "Padre Burgos",  "Pagbilao",  "Panukulan",  "Patnanungan",  "Perez",  "Pitogo",  "Plaridel",  "Polilo",  "Quezon",  "Real",  "Sampaloc",  "San Andres",  "San Antonio",  "San Francisco",  "San Narciso",  "Sariaya",  "Tagkawayan",  "Tayabas City",  "Tiaong",  "Unisan"};
    string Batangas[35] = {"", "Agoncillo", "Alitagtag", "Balayan", "Balete",  "Batangas City",  "Bauan",  "Calaca",  "Calatagan",  "Cuenca",  "Ibaan",  "Laurel",  "Lemery",  "Lian",  "Lipa City",  "Lobo",  "Mabini",  "Malvar",  "Mataasnakahoy",  "Nasugbu",  "Padre Garcia",  "Rosario",  "San Jose",  "San Juan",  "San Luis",  "San Nicolas",  "San Pascual",  "Santa Terisita",  "Santo Tomas",  "Taal",  "Talisay",  "Tanuan City",  "Taysan",  "Tingloy",  "Tuy"};
    string Aurora[2] = {"", "Municipality of Aurora"};
    string OrientalMindoro[16] = {"", "Baco", "Bansud", "Bongabong", "Bulalacao",  "Calapan City",  "Gloria",  "Mansalay",  "Naujan",  "Pinamalayan",  "Pola",  "Puerto Galera",  "Roxas",  "San Teodoro", "Socorro",  "Victoria"};; 
    string Albay[19] = {"", "Bacacay", "Camalig", "Daraga", "Guinobatan",  "Jovellar",  "Legazpi City",  "Libon",  "Ligao City",  "Malilipot",  "Malinao",  "Manito",  "Oas",  "Pio Duran",  "Polangui",  "Rapu-Rapu",  "Santo Domingo ",  "Tabaco City",  "Tiwi"};
    string CamarinesSur[38] = { "", "Baao",  "Balatan", "Bato", "Bombon",  "Buhi",  "Bula",  "Cabusao",  "Calabanga",  "Camaligan",  "Canaman",  "Caramoan",  "Del Gallego",  "Gainza",  "Garchitorena",  "Goa",  "Iriga City",  "Lagonoy",  "Libmanan",  "Lupi",  "Magarao",  "Milaor",  "Minalabac",  "Nabua",  "Naga City",  "Ocampo",  "Pamplona",  "Pasacao",  "Pili",  "Presentacion",  "Ragay",  "Sagnay",  "San Fernando",  "San Jose",  "Sipocot",  "Siruma",  "Tigaon",  "Tinambac"};
    string OccidentalMindoro[12] = {"", "Rizal",  "Abra De Ilog",  "Calintaan",  "Looc",  "Lubang",  "Magsaysay",  "Mambuarao",  "Paluan",  "Sablayan",  "San Jose",  "Santa Cruz"};    
//Metro Manila
    string MetroManila[31] ={"", "Binondo", "Caloocan City", "Ermita", "Intramuros", "Las Pinas City", "Makati City", "Malabon City", "Malate", "Mandaluyong City", "Marikina City", ", Muntinlupa City", "Navotas City", "Paco", "Pandacan", "Paranaque City", "Pasay City", "Pasig City", "Pateros", "Port Area", "Quezon City", "Quiapo", "Sampaloc", "San Juan City", "San Miguel", "San Nicolas", "Santa Ana", "Santa Cruz", "Taguig City", "Tondo I / II", "Valenzuela City"};
//North Luzon
    string NuevaEcija[33] = {"", "Aliaga" , "Bongabon" , "Cabantuan City" , "Cabiao"  , "Carrangalan" , "Cuyapo" , "Gabaldon" , "Gapan City" , "General Mamerto Natividad" , "General Tinio" , "Guiba" , "Jaen" , "Laur" , "Licab" , "Llanera" , "Lupao" , "Nampicuan" , "Palayan City" , "Pantabangan" ,"Penaranda" ,"Quezon" ,"Rizal" ,"San Antonio" ,"San Isidro" ,"San Jose City" ,"San Leonardo" ,"Santa Rosa" ,"Santo Domingo" ,"Science City Of Munoz" ,"Talavera" ,"Talugtog" ,"Zaragoza" }; 
    string Pampanga[23] = {"", "Angeles City" , "Apalit" , "Arayat" , "Bacolor ", "Candaba" , "Floridablanca" , "Guagua" , "Lubao" , "Mabalacat" , "Macabebe" , "Magalang" , "Manalin" , "Masantol" , "Mexico" , "Porac"  , "San Fernando City" , "San Luis" , "San Simon" , "Santa Ana" ,"Santa Rita" ,"Santo Tomas" ,"Sasmuan" };
    string IlocosSur[34] = {"", "San Vicente" , "Alilem" , "Banayoyo" , "Bantay" , "Burgos" , "Cabugao" , "Candon City" , "Caoayan" , "Cervantes" , "Galimuyod" , "Gregorio Del Pilar" , "Lidlidda" , "Magsingal" , "Nagbukel" , "Narvacan" , "Quirino" , "Salcedo" , "San Emilio" , "San Esteban"   ,"San Ildenfonso" ,"San Juan" ,"Santa Catalina" ,"Santa Cruz" ,"Santa Lucia" ,"Santa Maria" ,"Santiago" ,"Santo Domingo" ,"Sigay" ,"Sinalit" ,"Sugpon" ,"Suyo" ,"Tagudin" ,"Vigan City" };
    string Abra[28] = {"", "Bangued" , "Boliney" , "Bucay" , "Bucloc" , "Daguioman" , "Danglas" , "Dolores" , "La Paz" , "Lacub" , "Lagangilan" , "Lagayan" , "Langiden" , "Licuan (Baay)" , "Luba" , "Malibcong" , "Manabo" , "Penarrubia" , "Pidigan" , "Pilar" ,"Sallapadan" ,"San Isidro" ,"San Juan" ,"San Quintin" ,"Tayum" ,"Tineg" ,"Tubo" ,"Villaviciosa" };
    string Pangasinan[49] = {"", "Agno" , "Aguilar" , "Alaminos City" , "Alcala" , "Anda" , "Asingan" , "Balungai" , "Bani" , "Basista" , "Bautista" , "Bayambang" , "Binalonan" , "Binmaley" , "Bolinao" , "Bugallon" , "Burgos" , "Calasiao" , "Dagupan City" , "Dasol" ,"Infanta" ,"Labrador","Laoa" ,"Lingayen" ,"Mabini" ,"Malasiqui" ,"Manaoag" ,"Mangaldan" ,"Mangatarem"  ,"Mapandan" ,"Natividad" ,"Pozorrubio" ,"Rosales" ,"San Carlos City" ,"San Fabian" ,"San Jacinto" ,"San Manuel" ,"San Nicilas" ,"San Quitin" ,"Santa Barbara" ,"Santa Maria" ,"Santo Tomas" ,"Sison" ,"Sual" ,"Tayug" ,"Umingan" ,"Urbiztondo" ,"Urdaneta City" ,"Villasis" };
    string Apayao[8] = {"", "Calanasan" , "Conner" , "Flora" , "Kabugao" , "Luna"  , "Pudtol" , "Santa Marcela" };
    string Aurora2[9] = {"", "Baler"  , "Casiguran" , "Dilasag" , "Dinalungan" , "Dingalan" , "Dipaculao" , "Maria Aurora" , "San Luis" };
    string Kalinga[9] = {"", "Balbalan" , "Lubuagan" , "Pasil"   , "Pinukpuk" , "Rizal"  , "Tabuk City" , "Tanudan" , "Tinglayan" };
    string Tarlac[19] = {"", "Anao" , "Bamban" , "Camiling" , "Capas" , "Concepcion" , "Gerona" , "La Paz" , "Mayantoc" , "Moncada" , "Paniqui" , "Pura" , "Ramos" , "San Clemente" , "San Jose" , "San Manuel" , "Santa Ignacia" , "Tarlac City" , "Victoria" };
    string Isabela[39] = {"", "Alicia ", "Angadanan" , "Aurora" , "Benito Soliven" , "Burgos" , "Cabagan" , "Cabatuan" , "Cauayan City" , "Cordon" , "Delfin Albano" , "Dinapigue" , "Divilacan" , "Echague" , "Gamu" , "Ilagan" , "Isabela City" , "Jones" , "Luna" , "Maconacon" ,"Mallig" ,"Naguilian" ,"Palanan" ,"Quezon" ,"Quirino" ,"Ramon" ,"Reina Mercedes"  ,"Roxas" ,"San Agustin" ,"San Guillermo" ,"San Isidro" ,"San Manuel" ,"San Mariano" ,"San Mateo" ,"San Pablo" ,"Santa Maria" ,"Santiago City" ,"Santo Tomas" ,"Tumauini" };
    string Ifugao[12] = {"", "Aguinaldo"  , "Alfonso Lista" , "Asipulo" , "Banaue" , "Hingyon" , "Hungduan" , "Kiangan" , "Lagawe" , "Lamut" , "Mayoyao" , "Tinoc" };
    string Bulacan[25] = {"", "Angat" , "Balagtas" , "Baliuag" , "Bocaue" , "Bulacan" , "Bustos" , "Calumpit" , "Dona Remedios Trinidad" , "Guiguinto" , "Hagonoy"  , "Malolos City" , "Marilao" , "Meycauayan City" , "Norzagaray" , "Obando" , "Pandi" , "Paombong" , "Plaridel" , "Pulilan" ,"San Ildefonso" ,"San Jose Del Monte City" ,"San Miguel" ,"San Rafael" ,"Santa Maria" };
    string Benguet[15] = {"","Atok" , "Baguias" , "Baguio City" , "Bakun" , "Bokod" , "Itogom" , "Kabayan" , "Kapangan" , "Kibungan" , "La Trinidad" , "Mankayan" , "Sablan" , "Tuba" , "Tublay" };
    string MountainProvince[11] = {"", "Barlig"  , "Bauko" , "Besao" , "Bontoc" , "Natonin" , "Paracelis" , "Sabangan" , "Sadanga" , "Sagada" , "Tadian" }; 
    string Bataan[13] = {"", "Bagac" , "Balanga City" , "Balanga City" , "Dinalupihan" , "Dinalupihan" , "Hermosa" , "Limay" , "Morong" , "Orani" , "Orion" , "Pilar" , "Samal" };
    string Cagayan[30] = {"", "Abulug" , "Alcala" , "Allacapan" , "Amulung" , "Aparri" , "Baggao" , "Ballesteros"  , "Buguey" , "Calayan" , "Camalaniugan" , "Claveria" , "Enrile" , "Gattaran" , "Gonzaga" , "Iguig" , "Lal-lo" , "Lasam" , "Pamplona" , "Penablanca" ,"Piat" ,"Rizal" ,"Sanchez-Mira" ,"Santa Ana" ,"Santa Praxedes" ,"Santa Teresita" ,"Santo Nino" ,"Solana" ,"Tuao" ,"Tuguegarao City"};
    string Zambales[15] = {"", "Botolan" , "Cabangan" , "Candelaria" , "Castillejos" , "Iba" , "Masinloc" , "Olongapo City" , "Palauig" , "San Antonio" , "San Felipe" , "San Marcelino" , "San Narciso" , "Santa Crus" , "Subic"};
    string Quirino[7] = {"", "Aglipay" , "Cabarroguis" , "Diffun" , "Maddela"  , "Natipunan" , "Saguday" };
    string LaUnion[21] = {"", "Agoo" , "Aringay" , "Bacnotan" , "Bagulin" , "Balaoan" , "Bangar" , "Bauang" , "Burgos" , "Caba" , "Luna" , "Naguilian" , "Pugo" , "Rosario" , "San Fernando City" , "San Gabriel" , "San Juan" , "Santo Tomas" , "Santol" , "Sudipen" ,"Tubao" }; 
    string NuevaVizcaya[16] = {"", "Alfonso Castaneda" , "Ambaguio" , "Aritao" , "Bagabag" , "Bambang" , "Bayombong" , "Diadi" , "Dupax Del Norte"  , "Dupax Del Sur" , "Kasiba" , "Kayapa" , "Quezon" , "Santa Fe" , "Solano" , "Villaverde" };
    string IlocosNorte[24] = {"", "Adams" , "Bacarra" , "Badoc" , "Bangui" , "Banna" , "Batac City" , "Burgos" , "Carasi" , "Currimao" , "Dingras" , "Dumalneg" , "Laoag City" , "Marcos" , "Nueva Era" , "Pagudpud" , "Paoay" , "Pasuquin" , "Piddig" , "Pinili" ,"San Nicolas" ,"Sarrat" ,"Solsona" ,"Vintar" };
    string Batanes[7] = {"", "Basco" , "Itbayat" , "Ivana" , "Mahatao" , "Sabtang" , "Uyugan"};
//Visayas
    string NorthernSamar[25] = {"", "Allen" , "Biri" , "Bobon" , "Capul" , "Catarman" , "Catubig" , "Gamay" , "Laoang" , "Lapinig" , "Las Navas" , "Lavezares" , "Lope De Vega" , "Mapanas" , "Mondgragon" , "Palapag" , "Pambujan" , "Rosario" , "San Antonio" , "San Isidro" ,"San Jose" ,"San Roque" ,"San Vicente" ,"Silvino Lobos" ,"Victoria"};
    string Antique[19] = {"", "Anini-Y" , "Barbaza" , "Belison" , "Bugasong" , "Caluya" , "Culasi" , "Hamtic" , "Laua-an" , "Libertad" , "Pandan" , "Patnongon" , "San Jose" , "San Remigio" , "Sebaste" , "Sibalom" , "Tibiao" , "Tobias Fornier" , "Valderrama"};
    string SouternLeyte[20] = {"", "Anahawan" , "Bontoc" , "Hinunangan" , "Hinundayan" , "Libagon" , "Liloan" , "Limasawa" , "Maasin City" , "Macrohon" , "Malitbog" , "Padre Burgos" , "Pintuyan" , "Saint Bernard" , "San Francisco" , "San Juan" , "San Ricardo" , "Silago" , "Sogod" , "Tomas Oppus"};
    string Guimaras[6] = {"", "Buenavista" , "Jordan" , "Nueva Valencia" , "San Lorenzo" , "Sibunag"};
    string DinagatIsland[2] = {"", "Municipality of Dinagat Island"};
    string Leyte[45] = {"", "Abuyog" , "Alangalang" , "Albuera" , "Babatngon" , "Barugo" , "Bato" , "Baybay City" , "Burauen" , "Calubian" , "Capoocan" , "Carigara" , "Dagami" , "Dulag" , "Hiangos" , "Hindang" , "Inopacan" , "Isabel" , "Jaro" ,"Javier" ,"Julita" ,"Kananga" ,"La Paz" ,"Leyte" ,"Macarthur" ,"Mahaplag" ,"Matag-Ob" ,"Matalon" ,"Mayorga" ,"Merida" ,"Ormoc City" ,"Palo" ,"Palompon" ,"Pastrana" ,"San Isidro" ,"San Miguel" ,"Santa Fe" ,"Tabango" ,"Tabontabon" ,"Tacloban City" ,"Tanauan" ,"Tolosa" ,"Tunga" ,"Villaba" };
    string NegrosOccidental[33] = {"", "Bacolod City" , "Bago City" , "Binalbagan" , "Cadiz City" , "Calatrava" , "Candoni" , "Cauayan" , "Enriqur B. Magalona" , "Escalante City" , "Himamaylan City" , "Hinigaran" , "Hinoba-an" , "Ilog" , "Isabela" , "Kabankalan City" , "La Carlota City" , "La Castellana , Manapla" , "Moises Padilla" ,"Murcia" ,"Pontevedra" ,"Pulupandan" ,"Sagay City" ,"Salvador Benedicto" ,"San Carlos City" ,"San Enrique" ,"Silay City" ,"Sipalay City" ,"Talisay City" ,"Toboso" ,"Valladolid" ,"Victoruas City" }; 
    string Cebu[54] = {"", "Alcantara" , "Alcoy" , "Alegria" , "Aloguisan" , "Argao" , "Asturias" , "Badian" , "Balamban" , "Bantayan" , "Barili" , "Bogo City" , "Boljoon" , "Borbon" , "Carcar City" , "Carmen" , "Catmon" , "Cebu City" , "Compostela" , "Consolacion" ,"Cordoba" ,"Daanbantayan" ,"Dalaguete" ,"Damanjug" ,"Danao City" ,"Ginatilan" ,"Lapu-Lapu City" ,"Liloan" ,"Madridejos" ,"Malabuyoc" ,"Mandaue City" ,"Medellin" ,"Minglanilla"   ,"Moalboal" ,"Naga City" ,"Oslob" ,"Pilar" ,"Pinamungahan" ,"Poro" ,"Ronda" ,"Samboan" ,"San Fernando" ,"San Francisco" ,"San Remigio" ,"Santa Fe" ,"Santander" ,"Sibonga" ,"Sogod" ,"Tabogon" ,"Tabuelan" ,"Talisay City" ,"Toledo City" ,"Tuburan" ,"Tudela" };
    string Capiz[18] = {"", "Cuartero" , "Dao" , "Dumalag" , "Dumarao" , "Ivisan" , "Jamindan" , "Ma-ayon" , "Mambusao" , "Panay" , "Panitan" , "Pilar" , "Pontevedra" , "President Roxas" , "Roxas City" , "Sapi-an" , "Sigma" , "Tapaz"};
    string Biliran[9] = {"", "Almeria" , "Biliran" , "Cabucgayan" , "Caibiran" , "Culaba" , "Kawayan" , "Maripipi" , "Naval"};
    string Siquijor[7] = {"", "Enrique Villanueca" , "Larena" , "Lazi" , "Maria" , "San Juan" , "Siquijor"};
    string EasternSamar[25] = {"", "Arteche" , "Balangiha" , "Balangkayan" , "Borongan City" , "Can-Avid" , "Dolores" , "General Macarthur" , "Giporlos" , "Guiuan" , "Hernani" , "Jipapad" , "Laua-an" , "Llorente" , "Mandolong" , "Maslog" , "Maydolong" , "Mercedes"  , "Oras" , "Quinapondan" ,"Salcedo" ,"San Julian" ,"San Policarpo" ,"Sular" ,"Taft"}; 
    string WesternSamar[27] = {"", "Almagro" , "Basey" , "Calbayog City" , "Calbiga" , "Catbalogan City" , "Daram" , "Gandara" , "Hinabangan" , "Jiabong" , "Marabut" , "Matuguinao" , "Motiong" , "Pagsanghan" , "Paranas" , "Pinabacdao" , "San Jorge" , "San Jose De Buan" , "San Sebastian" , "Santa Margarita" ,"Santa Rita" ,"Santo Nino" ,"Tagapul-An" ,"Talalora" ,"Tarangnan" ,"Villareal" ,"Zumarraga"}; 
    string Bohol[48] = {"", "Alburquerque" , "Alicia" , "Antequera" , "Baclayon" , "Balilihan" , "Batuan" , "Bien Unido" , "Bilar" , "Buenavista" , "Calape" , "Candijay" , "Carmen" , "Catigbian" , "Clarin" , "Corella" , "Cortes"  , "Dagohoy" , "Danao" , "Dauis" ,"Dimiao" ,"Duero" ,"Garcia Hernandez" ,"Guindulman" ,"Inabanga" ,"Jagna" ,"Jetafe" ,"Lila" ,"Loay" ,"Loboc Anda" ,"Loon" ,"Mabini" ,"Maribojoc" ,"Panglao" ,"Pilar" ,"Pres. Carlos P. Garcia" ,"Sagbayan" ,"San Isidro" ,"San Miguel" ,"Sevilla" ,"Sierra Bullones" ,"Sikatuna" ,"Tagbilaran City" ,"Talibon" ,"Trinidad" ,"Tubigon" ,"Ubay" ,"Valencia"};
    string NegrosOriental[26] = {"", "Amlan" , "Ayungon" , "Bacong" , "Bais City" , "Basay" , "Bayawan City" , "Bindoy" , "Canaon City" , "Dauin" , "Dumaguete City" , "Guihulngan City" , "Jimalalud" , "La Libertad" , "Mabinay" , "Manjuyod" , "Pamplona" , "San Jose" , "Santa Catalina" , "Siaton" ,"Sibulan" ,"Tanjay City" ,"Tayasan" ,"Valencia" ,"Vallehermoso" ,"Zamboanguita"};
    string Aklan[18] = {"", "Altavas" , "Balete" , "Banga" , "Batan" , "Buruanga" , "Ibajay" , "Kalibo" , "Lezo" , "Libaco" , "Madalag" , "Makato" , "Malay" , "Malinao" , "Nabas" , "New Washinton" , "Numancia" , "Tangalan"};
    string Iloilo[45] = {"", "Ajuy" , "Alimodian" , "Anilao" , "Badiangan" , "Balasan" , "Banate" , "Barotac Nuevo" , "Barotac Viejo" , "Batad" , "Bingawan" , "Cabanatuan" , "Calinog" , "Carles" , "Coception" , "Dingle" , "Duenas" , "Dumangas" , "Estancia" , "Guibal" ,"Igbaras" ,"Iloilo City" ,"Janiuay" ,"Lambunao" ,"Leganes" ,"Lemery" ,"Leon" ,"Maasin" ,"Miagao" ,"Mina" ,"New Lucena" ,"Onton" ,"Passi City" ,"Pavia" ,"Pototan" ,"San Dionisio" ,"San Enrique" ,"San Joaquin" ,"San Miguel" ,"San Rafael" ,"Santa Barbara" ,"Sara" ,"Tigbauan" ,"Tubungan" ,"Zarraga"};
//Mindanao
    string Basilan[14] = {"", "Akbar" , "Al-Barka" , "Hadji Mohammad Ajul" , "Hadji Muhtamad" , "Isabela City" , "Lamitan City" , "Lantawan" , "Maluso" , "Sumipsip" , "Tabuan-Lasa" , "Tipo-Tipo" , "Tuburan" , "Ungkaya Pukan" };
    string SurigaoDelSur[20] = {"", "Barobo" , "Bayabas" , "Bislig City" , "Cagwait" , "Cantilan" , "Carmen" , "Carrascal" , "Cortes" , "Hinatuan" , "Lanuza" , "Lianga" , "Lingig" , "Madrid" , "Marihatag" , "San Agustin" , "San Miguel" , "Tagbina" , "Tago" , "Tandag City" }; 
    string LanaoDelSur[41] = {"", "Bacolod-Kalawi" , "Balabagan" , "Balindong" , "Bayang" , "Binidayan" , "Buadiposo-Buntong" , "Bubong" , "Bumbaran" , "Butig" , "Calanogas" , "Ditsaan-Ramain" , "Ganassi" , "Kapai" , "Kapatagan" , "Lumba-Bayabao" , "Lumbaca-Unayan" , "Lumbatan" , "Lumbayanaque" , "Madalum" ,"Madamba"  ,"Maguing" ,"Malabang" ,"Marantao" ,"Marawi City", "Marogong" ,"Masiu" ,"Mulondo" ,"Pagayawan" ,"Piagapo" ,"Picong" ,"Poona Bayabao" ,"Pualas" ,"Saguiaran" ,"Sultan Dumalondong" ,"Tagoloan Ii" ,"Tamparam" ,"Taraka" ,"Tubaran" ,"Tugaya" ,"Wao" }; 
    string AgusanDelSur[15] = {"", "Bayugan City" , "Bunawan" , "Esperanza" , "La Paz" , "Loreto" , "Prosperidad" , "Rosario" , "San Francisco" , "San Luis" , "Santa Josefa" , "Sibagat" , "Talacogon" , "Trento" , "Veruela" }; 
    string NorthCotabato[18] = {"", "Alamanda" , "Aleosan" , "Antipas" , "Arakan" , "Banisilan" , "Carmen" , "Kabacan" , "Kidapawan City" , "Libungan" , "Magpet" , "Makilala" , "Matalam" , "Midsayap" , "Pigkawayan" , "Pikit" , "President Roxas" , "Tulunan" };
    string DavaoDelSur[17] = {"", "Bansan" , "Davao City" , "Digos City" , "Don Marcelino" , "Hagonoy" , "Jose Abad Santos" , "Kiblawan" , "Magsaysay" , "Malalag" , "Malita" , "Matanao" , "Padala" , "Santa Cruz" , "Santa Maria" , "Sarangani" , "Sulop" }; 
    string LanaoDelNorte[24] = {"", "Bacolod" , "Baloi" , "Baroy" , "Iligan City" , "Kapatagan" , "Kauswagan" , "Kolambugan" , "Lala" , "Linamon" , "Magsaysay" , "Maigo" , "Matungao" , "Munai" , "Nunungan" , "Pantao Ragat" , "Pantar" , "Poona Piagapo" , "Salvador" , "Sapad" ,"Sultan Naga Dimaporo" ,"Tagoloan" ,"Tangcal" ,"Tubod" }; 
    string SouthCotabato[11] = {"", "Banga" , "Genral Santos City" , "Koronadal City" , "Lake Sebu" , "Norala" , "Polomolok" , "Santo Nino" , "Surallah" , "Tampakan" , "Tantangan" }; 
    string DavaoDelNorte[11] = {"", "Asuncion" , "Braulio E. Dujali" , "Carmen Talaingod" , "Isaland Garden City of Samal" , "Kapalong" , "New Corella" , "Panabo City" , "San Isidro" , "Santo Tomas" , "Tagum City" };
    string SurigaoDelNorte[22] = {"", "Alegria" , "Bacuag" , "Burgos" , "Claver" , "Dapa" , "Del Carmen" , "General Luna" , "Gigaquit" , "Mainit" , "Malimono" , "Pilar" , "Placer" , "San Benito" , "San Francisco" , "San Isidro" , "Santa Monica" , "Sison" , "Socorro" , "Surigao City" ,"Tagana-an" ,"Tubod"  }; 
    string DinagatIsland2[8] = {"", "Basilisa" , "Cagdianao" , "Dinagat" , "Libjo" , "Loreto" , "San Jose" , "Tubajon" }; 
    string CompostelaValley[12] = {"", "Compostela" , "Laak" , "Mabini" , "Maco" , "Maragusan" , "Mawab" , "Monkayo" , "Montevista" , "Nabunturan" , "New Bataan" , "Pantukan" }; 
    string ZamboangaDelSur[30] = {"", "Aurora" , "Bayog" , "Dimataling" , "Dinas" , "Dumalinao" , "Dumingag" , "Guipos" , "Josefina" , "Kumalarang" , "Labangan" , "Lakewood" , "Lapuyan" , "Mahayag" , "Margosatubig" , "Midsalip" , "Molave" , "Pagadian City" , "Pitogo" ,"Ramon Magsaysay" ,"San Miguel" ,"San Pablo" ,"Sominot" ,"Tabina" ,"Tambulig" ,"Tigbao" ,"Tukaran" ,"Vicenzo A. Sagun" ,"Zamboanga City" }; 
    string Bukidnon[23] = {"", "Baungon" , "Cabanglasan" , "Damulog" , "Dangcagan" , "Don Carlos" , "Impasug-ong" , "Kadingilan" , "Kalilangan" , "Kibawe" , "Kitaotao" , "Lantapan" , "Libona" , "Malaybay City" , "Malitbog" , "Manolo Fortich" , "Maramag" , "Pangantuzan" , "Quezon" , "San Fernando" ,"Sumilao" ,"Talakag" ,"Valencia City" };
    string Tawitawi[12] = {"", "Bongao" , "Languyan" , "Mapun" , "Panglima Sugala" , "Sapa-sapa" , "Sibutu" , "Simunul" , "Sitangkai" , "South Ubian" , "Tandubas" , "Turtle Island" }; 
    string AgusanDelNorte[13] = {"", "Buenavista" , "Butuan City" , "Cabadbaran City" , "Carmen" , "Jabonga" , "Kitcharao" , "Las Nieves" , "Magallanes" , "Nasipit" , "Remedios T. Romualdez" , "Santiago" , "Tubay" };
    string ZamboangaDelNorte[28] = {"", "Bacungan" , "Baliguian" , "Dapitan  City" , "Dipolog  City" , "Godod" , "Guitalac" , "Jose  Dalman" , "Kalawit" , "Katipunan" , "La  Libertad" , "Labason" , "Liloy" , "Manukan" , "Mutua" , "Pinan" , "Polanco" , "Pres.  Manuel  A. Roxas" , "Rizal" , "Salug" ,"Sergio  Osmena  Sr." ,"Siayan" ,"Sibuco" ,"Sibutas" ,"Sindangan" ,"Siocon" ,"Sirawai" ,"Tampilisan"};
    string Camiguin[6] = {"", "Catarman", "Guinsiliban", "Mahinog", "Mambajao", "Sagay"};
    string MisamisOriental[27] = {"", "Alubijid" , "Balingasag" , "Balingoan" , "Binuangan" , "Cagayan  De  Oro  City" , "Claveria" , "El  Salvador  City" , "Gingoog  City" , "Gitagum" , "Initao" , "Jasaan" , "Kinoguitan" , "Lagonglong" , "Laguindingan" , "Libertad" , "Lugait" , "Magsaysay" , "Manticao" , "Medina" ,"Naawan" ,"Opol" ,"Salay" ,"Sugbongcogon" ,"Tagoloan" ,"Talisayan" ,"Villanueva" };
    string Sarangani[8] = {"", "Alabel" , "Glan" , "Kiamba" , "Maasim" , "Maitum" , "Malapatan" , "Malungon" };
    string MisamisOccidental[18] = {"", "Aloran" , "Baliangao" , "Bonifacio" , "Calamba" , "Clarin" , "Concepcion" , "Don  Victoriano  Chiongbian" , "Jimenez" , "Lopez  Jaena" , "Oroquieta  City" , "Ozamis  City" , "Pana-on" , "Plaridel" , "Sapang  Dalaga" , "Sinacaban" , "Tangub  City" , "Tudela" };
    string Sulu[20] = {"", "Hadji  Panglima  Tahil" , "Indanan" , "Jolo" , "Kalingalan  Caluag" , "Lungus" , "Luuk" , "Maimbung" , "Old  Panamao" , "Omar" , "Pandami" , "Panglima  Estino" , "Pangutaran" , "Parang" , "Pata" , "Patikul" , "Siasi" , "Talipao" , "Tapul" , "Tongkil" };
    string Maguindanao[37] = {"", "Ampatuan" , "Barrira" , "Bulaan" , "Buldon" , "Datu  Abdullak  Sanki", "Datu  Anggal  Midtimbang" , "Datu  Blah  T.  Sinsuat" , "Datu  Hoffer  Ampatuan" , "Datu  Odin  Sinsuat" , "Datu  Paglas" , "Datu  Piang" , "Datu  Salibo" , "Datu  Saudi-Ampatuan" , "Datu  Unsay" , "Gen.  S.  K.  Pendatun" , "Guindulungan" , "Kabuntalan" , "Mamasapano" , "Mangundadatu" ,"Matanog" ,"Norther  Kabuntalan" ,"Pagagawan" ,"Pagalungan" ,"Paglat" ,"Pandag" ,"Parang" ,"Rajah  Buayan" ,"Shariff  Aguak" ,"Shariff  Saydona  Mustapha" ,"South  Upi" ,"Sultan  Kudarat" ,"Sultan  Mastura" ,"Sultan  Sa  Barongis" ,"Talayan" ,"Talitay" ,"Upi" };
    string Cotabato[2] = {"", "Cotabato  City" };
    string DavaoOriental[11] = {"", "Baganga" , "Banaybanay" , "Boston" , "Caraga" , "Cateel" , "Governador  Generoso" , "Lupon  Many" , "Mati  City" , "San  Isidro , Tarragona" }; 
    string ZamboangaSibugay[17] = {"", "Alicia" , "Buug" , "Diplahan" , "Imelda" , "Ipil" , "Kabasalan" , "Mabuhay" , "Malangas" , "Naga" , "Olutanga" , "Payao" , "Roseller  Lim" , "Siay" , "Talusan" , "Titay" , "Tungawan" };
    string SultanKudarat[13] = {"", "Bagumbayan" , "Columbio" , "Esperanza" , "Isulan" , "Kalamansig" , "Lambayong" , "Lebak" , "Lutayan" , "Palimbang" , "President  Quirino" , "Sen.  Ninoy  Aquino" , "Tacurong  City" };
    
    addresscheck:
                    
    cout << "\n_________________________________________________\n\n";
	cout << "   DELIVERY ADDRESS/S";
	cout << "\n_________________________________________________\n\n";
    cout << "(Enter your Complete Address)\n\n";
    cout << "\n[1] South Luzon\t\t[2] North Luzon\n[3] Metro Manila\t[4] Visayas\n[5] Mindanao\nEnter Region: ";
    cin >> rnum;
    switch (rnum){
        case 1:
        //South Luzon
            cout << "\n[1] Palawan\t[2] Catanduanes\t[3] Cavite\t[4] Laguna\n[5] Sorsogon\t[6] Masbate\t[7] Romblon\t[8] Rizal\n[9] Camarines Norte\t[10] Marinduque\t[11] Quezon\t[12] Batangas\t[13] Aurora\n[14] Oriental Mindoro\t[15] Albay\t[16] Camarines Sur\t[17] Occidental Mindoro\nEnter South Luzon Province: ";
            cin >> pnum;
            province = SLProv[pnum];
            shipping = 50;
            td = "5 - 8 days";
                switch (pnum){
                    case 1:
                    //Palawan
                        cout << "\nCities in Palawan:\n[1] Aborlan  \t[2] Agutaya  \t[3] Araceli  \t[4] Balabac  \n[5] Batarza  \t[6] Brooke's Point  \t[7] Busuanga  \t[8] Cagayancillo  \n[9] Coron  \t[10] Culion  \t[11] Cuyo  \t[12] Dumaran  \n[13] ElNido  \t[14] Kalayaan  \t[15] Linapacan  \t[16] Magsaysay  \n[17] Narra  \t[18] Puerto Princesa City  \t[19] Quezon  \t[20] Rizal  \n[21] Roxas  \t[22] San Vincente  \t[23] Sofronio Espanola  \t[24] Taytay  \n";
                            cin >> cnum;
                        city = Palawan[cnum];
                        break;
                    case 2:
                    //Catanduanes
                        cout << "\nCities:\n[1] Baras\t [2] Bato\t [3] Bayamonoc\t  [4] Camoran\n [5] Gigmoto\t [6] Pandan\t [7] Panganiban\t [8] San Andres\n [9] San Miguel\t [10] Viga\t [11] Virac\n";
                        cin >> cnum;
                        city = Catanduanes[cnum];
                        break;
                    case 3:
                    //Cavite
                        cout << "\nCities:\n[1] Alfonso\t [2] Amadeo\t [3] Bacoor\t [4] Carmona\n [5] Cavite City \t [6] Dasmarinas City \t [7] Gen \n [8] General Emilio Aguinaldo \t [9] General Trias \n [10] Imus";
                        cin >> cnum;
                        city = Cavite[cnum];
                        break;
                    case 4:
                    //Laguna
                        cout << "\nCities:\n[1] Calamba City\t [2] Alaminos\t [3] Bay\t [4] Binan City\n [5] Cabuyao\t [6] Calauan\t [7]Cavinti\t [8]Famy\n [9] Kalayaan\t [10] Liliw\t [11] Los Banos\t [12] Luisiana\n [13] Lumban\t [14] Mabitac\t [15] Magdalena\t [16] Majayjay\n [17] Nagcarlan\t [18] Paete\t [19] Pagsanjan\t [20] Pakil\n [21] Pangil\t [22] Pila\t [23] Rizal\t [24] San Pablo City\n [25] San Pedro\t [26] Santa Cruz\t [27] Santa Maria\t [28] Santa Rosa City\n [29] Siniloan\t [30]V ictoria\n";
                        cin >> cnum;
                        city = Laguna[cnum];
                        break;
                    case 5:
                    //Sorsogon
                        cout << "\nCities:\n[1] Barcelona \t[2] Bulan \t[3] Bulusan \t[4] Casiguran \n[5] Castilla \t[6] Donsol \t[7] Gubat  \t[8] Irosin \n[9] Juban \t[10] Magallanes \t[11] Matnog \t[12] Pilar \n[13] Prieto Diaz \t[14] Santa Magdalena \t[15] Sorsogon City\n";
                        cin >> cnum;
                        city = Sorsogon[cnum];
                        break;
                    case 6:
                    //Masbate
                        cout << "\nCities:\n[1] Aroroy \t[2] Baleno \t[3] Balud \t[4] Batuan \n[5] Cataingan \t[6] Cawayan \t[7] Claveria \t[8] Dimasalang \n[9] Esperanza \t[10] Mandaon \t[11] Masbate City \t[12] Milagros \n[13] Mobo \t[14] Monreal \t[15] Palanas \t[16] Pio V. Corpuz \n[17] Placer \t[18] San Fernando \t[19] San Jacinto \t[20] San Pascual \n[21] Uson\n";
                        cin >> cnum;
                        city = Masbate[cnum];
                        break;
                    case 7:
                    //Romblon
                        cout << "\nCities:\n[1] Conception \t[2] Alcantara \t[3] Banton \t[4] Cajidiocan \n[5] Calatrava \t[6] Corcuera \t[7] Ferrol \t[8] Looc \n[9] Magdiwang \t[10] Odiongan \t[11] Romblon \t[12] San Agustin \n[13] San Andres \t[14] San Jose \t[15] San Fernando \t[16] Santa Fe \n[17] Santa Maria\n";
                        cin >> cnum;
                        city = Romblon[cnum];
                        break;
                    case 8:
                    //Rizal
                        cout << "\nCities:\n[1] Angono \t[2] Antipolo City \t[3] Baras \t[4] Binangonan \n[5] Cainta \t[6] Cardona \t[7] Jala-jala \t[8] Morong \n[9] Pililla \t[10] Rodriquez \t[11] San Mateo \t[12] Tanay \n[13] Taytay \t[14] Teresa\n";
                        cin >> cnum;
                        city = Rizal[cnum];
                        break;
                    case 9:
                    //Camarines Norte 
                        cout << "\nCities:\n[1] Basud \t[2] Capalonga \t[3] Daet \t[4] Jose Panganiban \n[5] Labo \t[6] Mercedes  \t[7] Paracale \t[8] San Lorenzo Ruiz \n[9] San Vicente \t[10] Santa Elena \t[11] Talisay \t[12] Vinzons\n";
                        cin >> cnum;
                        city = CamarinesNorte[cnum];
                        break;
                    case 10:
                    //Marinduque
                        cout << "\nCities:\n[1] Boac  \t[2] Buenavista \t[3] Gasan \t[4] Mogpog \n[5] Santa Cruz \t[6] Torrijos\n";
                        cin >> cnum;
                        city = Marinduque[cnum];
                        break;
                    case 11:
                    //Quezon
                        cout << "\nCities:\n[1] Agdangan \t[2] Alabat \t[3] Atinonan \t[4] Buenavista \n[5] Burdeos \t[6] Calauag \t[7] Candelaria \t[8] Catanauan \n[9] Dolores \t[10] General Luna \t[11] General Nakar \t[12] Guinayangan \n[13] Gumaca \t[14] Infanta \t[15] Jomalig \t[16] Lopez  \n[17] Lucban \t[18] Lucena City \t[19] Macalelon \t[20] Mauban \n[21] Mulanay \t[22] Padre Burgos \t[23] Pagbilao \t[24] Panukulan \n[25] Patnanungan \t[26] Perez \t[27] Pitogo \t[28] Plaridel \n[29] Polilo \t[30] Quezon \t[31] Real \t[32] Sampaloc \n[33] San Andres \t[34] San Antonio \t[35] San Francisco \t[36] San Narciso \n[37] Sariaya \t[38] Tagkawayan \t[39] Tayabas City \t[40] Tiaong \n[41] Unisan\n";
                        cin >> cnum;
                        city = Quezon[cnum];
                        break;
                    case 12:
                    //Batangas
                        cout << "\nCities:\n[1] Agoncillo \t[2] Alitagtag \t[3] Balayan \t[4] Balete \n[5] Batangas City \t[6] Bauan \t[7] Calaca \t[8] Calatagan \n[9] Cuenca \t[10] Ibaan \t[11] Laurel \t[12] Lemery \n[13] Lian \t[14] Lipa City \t[15] Lobo \t[16] Mabini \n[17] Malvar \t[18] Mataasnakahoy  \t[19] Nasugbu \t[20] Padre Garcia \n[21] Rosario \t[22] San Jose \t[23] San Juan \t[24] San Luis \n[25] San Nicolas \t[26] San Pascual \t[27] Santa Terisita \t[28] Santo Tomas \n[29] Taal \t[30] Talisay \t[31] Tanuan City \t[32] Taysan \n[33] Tingloy \t[34] Tuy\n";
                        cin >> cnum;
                        city = Batangas[cnum];
                        break;
                    case 13:
                    //Aurora
                        cout << "\nCities:\n[1] Municipality of Aurora\n";
                        cin >> cnum;
                        city = Aurora[cnum];
                        break;
                    case 14:
                    //Oriental Mindoro 
                        cout << "\nCities:\n[1] Baco \t[2] Bansud \t[3] Bongabong \t[4] Bulalacao \n[5] Calapan City \t[6] Gloria \t[7] Mansalay \t[8] Naujan \n[9] Pinamalayan \t[10] Pola \t[11] Puerto Galera \t[12] Roxas \n[13] San Teodoro \t[14] Socorro \t[15] Victoria\n";
                        cin >> cnum;
                        city = OrientalMindoro[cnum];
                        break;
                    case 15:
                    //Albay
                        cout << "\nCities:\n[1] Bacacay \t[2] Camalig \t[3] Daraga \t[4] Guinobatan \n[5] Jovellar \t[6] Legazpi City \t[7] Libon \t[8] Ligao City \n[9] Malilipot \t[10] Malinao \t[11] Manito \t[12] Oas \n[13] Pio Duran \t[14] Polangui \t[15] Rapu-Rapu \t[16] Santo Domingo  \n[17] Tabaco City \t[18] Tiwi\n";
                        cin >> cnum;
                        city = Albay[cnum];
                        break;
                    case 16:
                    //Camarines Sur 
                        cout << "\nCities:\n[1] Baao \t[2] Balatan \t[3] Bato \t[4] Bombon \n[5] Buhi \t[6] Bula \t[7] Cabusao \t[8] Calabanga \n[9] Camaligan \t[10] Canaman \t[11] Caramoan \t[12] Del Gallego \n[13] Gainza \t[14] Garchitorena \t[15] Goa \t[16] Iriga City \n[17] Lagonoy \t[18] Libmanan \t[19] Lupi \t[20] Magarao \n[21] Milaor \t[22] Minalabac \t[23] Nabua \t[24] Naga City \n[25] Ocampo \t[26] Pamplona \t[27] Pasacao  \t[28] Pili \n[29] Presentacion \t[30] Ragay \t[31] Sagnay \t[32] San Fernando \n[33] San Jose \t[34] Sipocot \t[35] Siruma \t[36] Tigaon \n[37] Tinambac\n";
                        cin >> cnum;
                        city = CamarinesSur[cnum];
                        break;
                    case 17:
                    //Occidental Mindoro
                        cout << "\nCities:\n[1] Rizal \t[2] Abra De Ilog \t[3] Calintaan \t[4] Looc \n[5] Lubang \t[6] Magsaysay \t[7] Mambuarao \t[8] Paluan \n[9] Sablayan \t[10] San Jose \t[11] Santa Cruz\n";
                        cin >> cnum;
                        city = OccidentalMindoro[cnum];
                        break;
                }
            break;
       case 2:
       //North Luzon
            cout << "\n[1] Nueva Ecija  \t[2] Pampanga \t[3] Ilocos Sur  \t[4] Abra \n[5] Apayao \t[6] Aurora \t[7] Kalinga \t[8] Tarlac \n[9] Isabela \t[10] Ifugao \t[11] Bulacan \t[12] Benguet \n[13] Mountain Province  \t[14] Bataan \t[15] Cagayan \t[16] Zambales \n[17] Quirino \t[18] La Union  \t[19] Nueva Vizcaya \t[20] Ilocos Norte  \n[21] Batanes\nEnter North Luzon Province: ";
            cin >> pnum;
            province = NLProv[pnum];
            shipping = 50;
            td = "5 - 8 days";
                switch (pnum){
                       case 1:
                   //Nueva Ecija 
                        cout << "\nCities:\n[1] Aliaga \t[2] Bongabon \t[3] Cabantuan City \t[4] Cabiao  \n[5] Carrangalan \t[6] Cuyapo \t[7] Gabaldon \t[8] Gapan City \n[9] General Mamerto Natividad \t[10] General Tinio \t[11] Guiba \t[12] Jaen \n[13] Laur \t[14] Licab \t[15] Llanera \t[16] Lupao \n[17] Nampicuan \t[18] Palayan City \t[19] Pantabangan \t[20] Penaranda \n[21] Quezon \t[22] Rizal \t[23] San Antonio \t[24] San Isidro \n[25] San Jose City \t[26] San Leonardo \t[27] Santa Rosa \t[28] Santo Domingo \n[29] Science City Of Munoz \t[30] Talavera \t[31] Talugtog \t[32] Zaragoza\n";
                        cin >> cnum;
                        city = NuevaEcija[cnum];
                        break;
                   case 2:
                   //Pampanga
                        cout << "\nCities:\n[1] Angeles City \t[2] Apalit \t[3] Arayat \t[4] Bacolor \n[5] Candaba \t[6] Floridablanca \t[7] Guagua \t[8] Lubao \n[9] Mabalacat \t[10] Macabebe \t[11] Magalang \t[12] Manalin \n[13] Masantol \t[14] Mexico \t[15] Porac  \t[16] San Fernando City \n[17] San Luis \t[18] San Simon \t[19] Santa Ana \t[20] Santa Rita \n[21] Santo Tomas \t[22] Sasmuan\n";
                        cin >> cnum;
                        city = Pampanga[cnum];
                        break;
                   case 3:
                   //Ilocos Sur 
                        cout << "\nCities:\n[1] San Vicente \t[2] Alilem \t[3] Banayoyo \t[4] Bantay \n[5] Burgos \t[6] Cabugao \t[7] Candon City \t[8] Caoayan \n[9] Cervantes \t[10] Galimuyod \t[11] Gregorio Del Pilar \t[12] Lidlidda \n[13] Magsingal \t[14] Nagbukel \t[15] Narvacan \t[16] Quirino \n[17] Salcedo \t[18] San Emilio \t[19] San Esteban   \t[20] San Ildenfonso \n[21] San Juan \t[22] Santa \t[23] Santa Catalina \t[24] Santa Cruz \n[25] Santa Lucia \t[26] Santa Maria \t[27] Santiago \t[28] Santo Domingo \n[29] Sigay \t[30] Sinalit \t[31] Sugpon \t[32] Suyo \n[33] Tagudin \t[34] Vigan City\n";
                        cin >> cnum;
                        city = IlocosSur[cnum];
                        break;
                   case 4:
                   //Abra
                        cout << "\nCities:\n[1] Bangued \t[2] Boliney \t[3] Bucay \t[4] Bucloc \n[5] Daguioman \t[6] Danglas \t[7] Dolores \t[8] La Paz \n[9] Lacub \t[10] Lagangilan \t[11] Lagayan \t[12] Langiden \n[13] Licuan (Baay) \t[14] Luba \t[15] Malibcong \t[16] Manabo \n[17] Penarrubia \t[18] Pidigan \t[19] Pilar \t[20] Sallapadan \n[21] San Isidro \t[22] San Juan \t[23] San Quintin \t[24] Tayum \n[25] Tineg \t[26] Tubo \t[27] Villaviciosa\n";
                        cin >> cnum;
                        city = Abra[cnum];
                        break;
                   case 5:
                   //Pangasinan
                        cout << "\nCities:\n[1] Agno \t[2] Aguilar \t[3] Alaminos City \t[4] Alcala \n[5] Anda \t[6] Asingan \t[7] Balungai \t[8] Bani \n[9] Basista \t[10] Bautista \t[11] Bayambang \t[12] Binalonan \n[13] Binmaley \t[14] Bolinao \t[15] Bugallon \t[16] Burgos \n[17] Calasiao \t[18] Dagupan City \t[19] Dasol \t[20] Infanta \n[21] Labrador \t[22] Laoag \t[23] Lingayen \t[24] Mabini \n[25] Malasiqui \t[26] Manaoag \t[27] Mangaldan \t[28] Mangatarem  \n[29] Mapandan \t[30] Natividad \t[31] Pozorrubio \t[32] Rosales \n[33] San Carlos City \t[34] San Fabian \t[35] San Jacinto \t[36] San Manuel \n[37] San Nicilas \t[38] San Quitin \t[39] Santa Barbara \t[40] Santa Maria \n[41] Santo Tomas \t[42] Sison \t[43] Sual \t[44] Tayug \n[45] Umingan \t[46] Urbiztondo \t[47] Urdaneta City \t[48] Villasis\n";
                        cin >> cnum;
                        city = Pangasinan[cnum];
                        break;
                   case 6:
                   //Apayao
                        cout << "\nCities:\n[1] Calanasan \t[2] Conner \t[3] Flora \t[4] Kabugao \n[5] Luna  \t[6] Pudtol \t[7] Santa Marcela \n";
                        cin >> cnum;
                        city = Apayao[cnum];
                        break;
                   case 7:
                   //Aurora
                        cout << "\nCities:\n[1] Baler  \t[2] Casiguran \t[3] Dilasag \t[4] Dinalungan \n[5] Dingalan \t[6] Dipaculao \t[7] Maria Aurora \t[8] San Luis \n";
                        cin >> cnum;
                        city = Aurora[cnum];
                        break;
                   case 8:
                   //Kalinga
                        cout << "\nCities:\n[1] Balbalan \t[2] Lubuagan \t[3] Pasil   \t[4] Pinukpuk \n[5] Rizal  \t[6] Tabuk City \t[7] Tanudan \t[8] Tinglayan\n";
                        cin >> cnum;
                        city = Kalinga[cnum];
                        break;
                   case 9:
                   //Tarlac
                        cout << "\nCities:\n[1] Anao \t[2] Bamban \t[3] Camiling \t[4] Capas \n[5] Concepcion \t[6] Gerona \t[7] La Paz \t[8] Mayantoc \n[9] Moncada \t[10] Paniqui \t[11] Pura \t[12] Ramos \n[13] San Clemente \t[14] San Jose \t[15] San Manuel \t[16] Santa Ignacia \n[17] Tarlac City \t[18] Victoria \n";
                        cin >> cnum;
                        city = Tarlac[cnum];
                        break;
                   case 10:
                   //Isabela
                        cout << "\nCities:\n[1] Alicia \t[2] Angadanan \t[3] Aurora \t[4] Benito Soliven \n[5] Burgos \t[6] Cabagan \t[7] Cabatuan \t[8] Cauayan City \n[9] Cordon \t[10] Delfin Albano \t[11] Dinapigue \t[12] Divilacan \n[13] Echague \t[14] Gamu \t[15] Ilagan \t[16] Isabela City \n[17] Jones \t[18] Luna \t[19] Maconacon \t[20] Mallig \n[21] Naguilian \t[22] Palanan \t[23] Quezon \t[24] Quirino \n[25] Ramon \t[26] Reina Mercedes  \t[27] Roxas \t[28] San Agustin \n[29] San Guillermo \t[30] San Isidro \t[31] San Manuel \t[32] San Mariano \n[33] San Mateo \t[34] San Pablo \t[35] Santa Maria \t[36] Santiago City \n[37] Santo Tomas \t[38] Tumauini \n";
                        cin >> cnum;
                        city = Isabela[cnum];
                        break;
                   case 11:
                   //Ifugao
                        cout << "\nCities:\n[1] Aguinaldo  \t[2] Alfonso Lista \t[3] Asipulo \t[4] Banaue \n[5] Hingyon \t[6] Hungduan \t[7] Kiangan \t[8] Lagawe \n[9] Lamut \t[10] Mayoyao \t[11] Tinoc \n";
                        cin >> cnum;
                        city = Ifugao[cnum];
                        break;
                   case 12:
                   //Bulacan
                        cout << "\nCities:\n[1] Angat \t[2] Balagtas \t[3] Baliuag \t[4] Bocaue \n[5] Bulacan \t[6] Bustos \t[7] Calumpit \t[8] Dona Remedios Trinidad \n[9] Guiguinto \t[10] Hagonoy  \t[11] Malolos City \t[12] Marilao \n[13] Meycauayan City \t[14] Norzagaray \t[15] Obando \t[16] Pandi \n[17] Paombong \t[18] Plaridel \t[19] Pulilan \t[20] San Ildefonso \n[21] San Jose Del Monte City \t[22] San Miguel \t[23] San Rafael \t[24] Santa Maria \n";
                        cin >> cnum;
                        city = Bulacan[cnum];
                        break;
                   case 13:
                   //Benguet
                        cout << "\nCities:\n[1] Atok \t[2] Baguias \t[3] Baguio City \t[4] Bakun \n[5] Bokod \t[6] Itogom \t[7] Kabayan \t[8] Kapangan \n[9] Kibungan \t[10] La Trinidad \t[11] Mankayan \t[12] Sablan \n[13] Tuba \t[14] Tublay \n";
                        cin >> cnum;
                        city = Benguet[cnum];
                        break;
                   case 14:
                   //Mountain Province
                        cout << "\nCities:\n[1] Barlig  \t[2] Bauko \t[3] Besao \t[4] Bontoc \n[5] Natonin \t[6] Paracelis \t[7] Sabangan \t[8] Sadanga \n[9] Sagada \t[10] Tadian \n";
                        cin >> cnum;
                        city = MountainProvince[cnum];
                        break;
                   case 15:
                   //Bataan
                        cout << "\nCities:\n[1] Bagac \t[2] Balanga City \t[3] Balanga City \t[4] Dinalupihan \n[5] Dinalupihan \t[6] Hermosa \t[7] Limay \t[8] Morong \n[9] Orani \t[10] Orion \t[11] Pilar \t[12] Samal \n";
                        cin >> cnum;
                        city = Bataan[cnum];
                        break;
                   case 16:
                   //Cagayan
                        cout << "\nCities:\n[1] Abulug \t[2] Alcala \t[3] Allacapan \t[4] Amulung \n[5] Aparri \t[6] Baggao \t[7] Ballesteros  \t[8] Buguey \n[9] Calayan \t[10] Camalaniugan \t[11] Claveria \t[12] Enrile \n[13] Gattaran \t[14] Gonzaga \t[15] Iguig \t[16] Lal-lo \n[17] Lasam \t[18] Pamplona \t[19] Penablanca \t[20] Piat \n[21] Rizal \t[22] Sanchez-Mira \t[23] Santa Ana \t[24] Santa Praxedes \n[25] Santa Teresita \t[26] Santo Nino \t[27] Solana \t[28] Tuao \n[29] Tuguegarao City  \n";
                        cin >> cnum;
                        city = Cagayan[cnum];
                        break;
                   case 17:
                   //Zambales
                        cout << "\nCities:\n[1] Botolan \t[2] Cabangan \t[3] Candelario \t[4] Castillejos \n[5] Iba \t[6] Masinloc \t[7] Olongapo City \t[8] Palauig \n[9] San Antonio \t[10] San Felipe \t[11] San Marcelino \t[12] San Narciso \n[13] Santa Crus \t[14] Subic \n";
                        cin >> cnum;
                        city = Zambales[cnum];
                        break;
                   case 18:
                   //Quirino
                        cout << "\nCities:\n[1] Aglipay \t[2] Cabarroguis \t[3] Diffun \t[4] Maddela  \n[5] Natipunan \t[6] Saguday \n";
                        cin >> cnum;
                        city = Quirino[cnum];
                        break;
                   case 19:
                   //La Union 
                        cout << "\nCities:\n[1] Agoo \t[2] Aringay \t[3] Bacnotan \t[4] Bagulin \n[5] Balaoan \t[6] Bangar \t[7] Bauang \t[8] Burgos \n[9] Caba \t[10] Luna \t[11] Naguilian \t[12] Pugo \n[13] Rosario \t[14] San Fernando City \t[15] San Gabriel \t[16] San Juan \n[17] Santo Tomas \t[18] Santol \t[19] Sudipen \t[20] Tubao \n";
                        cin >> cnum;
                        city = LaUnion[cnum];
                        break;
                   case 20:
                   //Nueva Vizcaya 
                        cout << "\nCities:\n[1] Alfonso Castaneda \t[2] Ambaguio \t[3] Aritao \t[4] Bagabag \n[5] Bambang \t[6] Bayombong \t[7] Diadi \t[8] Dupax Del Norte  \n[9] Dupax Del Sur \t[10] Kasiba \t[11] Kayapa \t[12] Quezon \n[13] Santa Fe \t[14] Solano \t[15] Villaverde \n";
                        cin >> cnum;
                        city = NuevaVizcaya[cnum];
                        break;
                   case 21:
                   //Ilocos Norte 
                        cout << "\nCities:\n[1] Adams \t[2] Bacarra \t[3] Badoc \t[4] Bangui \n[5] Banna \t[6] Batac City \t[7] Burgos \t[8] Carasi \n[9] Currimao \t[10] Dingras \t[11] Dumalneg \t[12] Laoag City \n[13] Marcos \t[14] Nueva Era \t[15] Pagudpud \t[16] Paoay \n[17] Pasuquin \t[18] Piddig \t[19] Pinili \t[20] San Nicolas \n[21] Sarrat \t[22] Solsona \t[23] Vintar \n";
                        cin >> cnum;
                        city = IlocosNorte[cnum];
                        break;
                   case 22:
                   //Batanes
                        cout << "\nCities:\n[1] Basco \t[2] Itbayat \t[3] Ivana \t[4] Mahatao \n[5] Sabtang \t[6] Uyugan\n";
                        cin >> cnum;
                        city = Batanes[cnum];
                        break;
                       }      
            break;
        case 3:
        //Metro Manila
        shipping = 30;
        td = "2 - 5 days";
            cout << "\nMetro Manila Province: Metro Manila\n";
            province = MMProv[1];
            getch();
            cout << "\nCities:\n[1] Binondo \t[2] Caloocan City \t[3] Ermita \t[4] Intramuros \n[5] Las Pinas City \t[6] Makati City \t[7] Malabon City \t[8] Malate \n[9] Mandaluyong City \t[10] Marikina City \t[11] Muntinlupa City \t[12] Navotas City   \n[13] Paco \t[14] Pandacan \t[15] Paranaque City \t[16] Pasay City \n[17] Pasig City \t[18] Pateros \t[19] Port Area \t[20] Quezon City \n[21] Quiapo \t[22] Sampaloc \t[23] San Juan City \t[24] San Miguel \n[25] San Nicolas \t[26] Santa Ana \t[27] Santa Cruz \t[28] Taguig City \n[29] Tondo I / II \t[30] Valenzuela City\n";
            cin >> cnum;
            city = MetroManila[cnum];
            break;
        case 4:
        //Visayas
            cout << "\n[1] Northern Samar  \t[2] Antique \t[3] Soutern Leyte  \t[4] Guimaras \n[5] Dinagat Island  \t[6] Leyte \t[7] Negros Occidental  \t[8] Cebu \n[9] Capiz \t[10] Biliran \t[11] Siquijor \t[12] Eastern Samar  \n[13] Western Samar  \t[14] Bohol \t[15] Negros Oriental  \t[16] Aklan \n[17] Iloilo\nEnter Visayas Province: ";
            cin >> pnum;
            province = VProv[pnum];
            shipping = 70;
            td = "5 - 10 days";
            switch (pnum){
                   case 1:
                   //Northern Samar 
                        cout << "\nCities:\n[1] Allen \t[2] Biri \t[3] Bobon \t[4] Capul \n[5] Catarman \t[6] Catubig \t[7] Gamay \t[8] Laoang \n[9] Lapinig \t[10] Las Navas \t[11] Lavezares \t[12] Lope De Vega \n[13] Mapanas \t[14] Mondgragon \t[15] Palapag \t[16] Pambujan \n[17] Rosario \t[18] San Antonio \t[19] San Isidro \t[20] San Jose \n[21] San Roque \t[22] San Vicente \t[23] Silvino Lobos \t[24] Victoria  \n";
                        cin >> cnum;
                        city = NorthernSamar[cnum];
                        break;
                   case 2:
                   //Antique
                        cout << "\nCities:\n[1] Anini-Y \t[2] Barbaza \t[3] Belison \t[4] Bugasong \n[5] Caluya \t[6] Culasi \t[7] Hamtic \t[8] Laua-an \n[9] Libertad \t[10] Pandan \t[11] Patnongon \t[12] San Jose \n[13] San Remigio \t[14] Sebaste \t[15] Sibalom \t[16] Tibiao \n[17] Tobias Fornier \t[18] Valderrama \n";
                        cin >> cnum;
                        city = Antique[cnum];
                        break;
                   case 3:
                   //Soutern Leyte 
                        cout << "\nCities:\n[1] Anahawan \t[2] Bontoc \t[3] Hinunangan \t[4] Hinundayan \n[5] Libagon \t[6] Liloan \t[7] Limasawa \t[8] Maasin City \n[9] Macrohon \t[10] Malitbog \t[11] Padre Burgos \t[12] Pintuyan \n[13] Saint Bernard \t[14] San Francisco \t[15] San Juan \t[16] San Ricardo \n[17] Silago \t[18] Sogod \t[19] Tomas Oppus \n";
                        cin >> cnum;
                        city = SouternLeyte[cnum];
                        break;
                   case 4:
                   //Guimaras
                        cout << "\nCities:\n[1] Buenavista \t[2] Jordan \t[3] Nueva Valencia \t[4] San Lorenzo \n[5] Sibunag  \n";
                        cin >> cnum;
                        city = Guimaras[cnum];
                        break;
                   case 5:
                   //Dinagat Island 
                        cout << "\nCities: Municipality of Dinagat Island  \n";
                        cnum = 1;
                        city = DinagatIsland[cnum];
                        break;
                   case 6:
                   //Leyte 
                        cout << "\nCities:\n[1] Abuyog \t[2] Alangalang \t[3] Albuera \t[4] Babatngon \t[6] Barugo \t[7] Bato \t[8] Baybay City \n[9] Burauen \t[10] Calubian \t[11] Capoocan \t[12] Carigara \n[13] Dagami \t[14] Dulag \t[15] Hiangos \t[16] Hindang \n[17] Inopacan \t[18] Isabel \t[19] Jaro \t[20] Javier \n[21] Julita \t[22] Kananga \t[23] La Paz \t[24] Leyte \n[25] Macarthur \t[26] Mahaplag \t[27] Matag-Ob \t[28] Matalon \n[29] Mayorga \t[30] Merida \t[31] Ormoc City \t[32] Palo \n[33] Palompon \t[34] Pastrana \t[35] San Isidro \t[36] San Miguel \n[37] Santa Fe \t[38] Tabango \t[39] Tabontabon \t[40] Tacloban City \n[41] Tanauan \t[42] Tolosa \t[43] Tunga \t[44] Villaba \n";
                        cin >> cnum;
                        city = Leyte[cnum];
                        break;
                   case 7:
                   //Negros Occidental 
                        cout << "\nCities:\n[1] Bacolod City \t[2] Bago City \t[3] Binalbagan \t[4] Cadiz City \n[5] Calatrava \t[6] Candoni \t[7] Cauayan \t[8] Enriqur B. Magalona \n[9] Escalante City \t[10] Himamaylan City \t[11] Hinigaran \t[12] Hinoba-an \n[13]Ilog \t[14] Isabela \t[15] Kabankalan City \t[16] La Carlota City \n[17] La Castellana \t[18] Manapla \t[19] Moises Padilla \t[20] Murcia \n[21] Pontevedra \t[22] Pulupandan \t[23] Sagay City \t[24] Salvador Benedicto \n[25] San Carlos City \t[26] San Enrique \t[27] Silay City \t[28] Sipalay City \n[29] Talisay City \t[30] Toboso \t[31] Valladolid \t[32] Victoruas City \n";
                        cin >> cnum;
                        city = NegrosOccidental[cnum];
                        break;
                   case 8:
                   //Cebu 
                        cout << "\nCities:\n[1] Alcantara \t[2] Alcoy \t[3] Alegria \t[4] Aloguisan \n[5] Argao \t[6] Asturias \t[7] Badian \t[8] Balamban \n[9] Bantayan \t[10] Barili \t[11] Bogo City \t[12] Boljoon \n[13] Borbon \t[14] Carcar City \t[15] Carmen \t[16] Catmon \n[17] Cebu City \t[18] Compostela \t[19] Consolacion \t[20] Cordoba \n[21] Daanbantayan \t[22] Dalaguete \t[23] Damanjug \t[24] Danao City \n[25] Ginatilan \t[26] Lapu-Lapu City \t[27] Liloan \t[28] Madridejos \n[29] Malabuyoc \t[30] Mandaue City \t[31] Medellin \t[32] Minglanilla   \n[33] Moalboal \t[34] Naga City \t[35] Oslob \t[36]Pilar \n[37] Pinamungahan \t[38] Poro \t[39] Ronda \t[40] Samboan \n[41] San Fernando \t[42] San Francisco \t[43] San Remigio \t[44] Santa Fe \n[45] Santander \t[46] Sibonga \t[47] Sogod \t[48] Tabogon \n[49] Tabuelan \t[50] Talisay City \t[51] Toledo City \t[52] Tuburan \n\n[53] Tudela \n";
                        cin >> cnum;
                        city = Cebu[cnum];
                        break;
                   case 9:
                   //Capiz
                        cout << "\nCities:\n[1] Cuartero \t[2] Dao \t[3] Dumalag \t[4]Dumarao \n[5] Ivisan \t[6] Jamindan \t[7] Ma-ayon \t[8] Mambusao \n[9] Panay \t[10] Panitan \t[11] Pilar \t[12] Pontevedra \n[13] President Roxas \t[14] Roxas City \t[15] Sapi-an \t[16] Sigma \n[17] Tapaz  \n";
                        cin >> cnum;
                        city = Capiz[cnum];
                        break;
                   case 10:
                   //Biliran
                        cout << "\nCities:\n[1] Almeria \t[2] Biliran \t[3] Cabucgayan \t[4] Caibiran \n[5] Culaba \t[6] Kawayan \t[7] Maripipi \t[8] Naval \n";
                        cin >> cnum;
                        city = Biliran[cnum];
                        break;
                   case 11:
                   //Siquijor
                        cout << "\nCities:\n[1] Enrique Villanueca \t[2] Larena \t[3] Lazi \t[4] Maria \n[5] San Juan \t[6] Siquijor  \n";
                        cin >> cnum;
                        city = Siquijor[cnum];
                        break;
                   case 12:
                   //Eastern Samar 
                        cout << "\nCities:\n[1] Arteche \t[2] Balangiha \t[3] Balangkayan \t[4] Borongan City \n[5] Can-Avid \t[6] Dolores \t[7] General Macarthur \t[8] Giporlos \n[9] Guiuan \t[10] Hernani \t[11] Jipapad \t[12] Laua-an \n[13] Llorente \t[14] Mandolong \t[15] Maslog \t[16] Maydolong \n[17] Mercedes  \t[18] Oras \t[19] Quinapondan \t[20] Salcedo \n[21] San Julian \t[22] San Policarpo \t[23] Sular \t[24] Taft\n";
                        cin >> cnum;
                        city = EasternSamar[cnum];
                        break;
                   case 13:
                   //Western Samar 
                        cout << "\nCities:\n[1] Almagro \t[2] Basey \t[3] Calbayog City \t[4] Calbiga \n[5] Catbalogan City \t[6] Daram \t[7] Gandara \t[8] Hinabangan \n[9] Jiabong \t[10] Marabut \t[11] Matuguinao \t[12] Motiong \n[13] Pagsanghan \t[14] Paranas \t[15] Pinabacdao \t[16] San Jorge \n[17] San Jose De Buan \t[18] San Sebastian \t[19] Santa Margarita \t[20] Santa Rita \n[21] Santo Nino \t[22] Tagapul-An \t[23] Talalora \t[24] Tarangnan \n[25] Villareal \t[26] Zumarraga \n";
                        cin >> cnum;
                        city = WesternSamar[cnum];
                        break;
                   case 14:
                   //Bohol
                        cout << "\nCities:\n[1] Alburquerque \t[2] Alicia \t[3] Antequera \t[4] Baclayon \n[5] Balilihan \t[6] Batuan \t[7] Bien Unido \t[8] Bilar \n[9] Buenavista \t[10] Calape \t[11] Candijay \t[12] Carmen \n[13] Catigbian \t[14] Clarin \t[15] Corella \t[16] Cortes  \n[17] Dagohoy \t[18] Danao \t[19] Dauis \t[20] Dimiao \n[21] Duero \t[22] Garcia Hernandez \t[23] Guindulman \t[24] Inabanga \n[25] Jagna \t[26] Jetafe \t[27] Lila \t[28] Loay \n[29] Loboc Anda \t[30] Loon \t[31] Mabini \t[32] Maribojoc \n[33] Panglao \t[34] Pilar \t[35] Pres. Carlos P. Garcia \t[36] Sagbayan \n[37] San Isidro \t[38] San Miguel \t[39] Sevilla \t[40] Sierra Bullones \n[41] Sikatuna \t[42] Tagbilaran City \t[43] Talibon \t[44] Trinidad \n[45] Tubigon \t[46] Ubay \t[47] Valencia  \n";
                        cin >> cnum;
                        city = Bohol[cnum];
                        break;
                   case 15:
                   //Negros Oriental 
                        cout << "\nCities:\n[1] Amlan \t[2] Ayungon \t[3] Bacong \t[4] Bais City \n[5] Basay \t[6] Bayawan City \t[7] Bindoy \t[8] Canaon City \n[9] Dauin \t[10] Dumaguete City \t[11] Guihulngan City \t[12] Jimalalud \n[13] La Libertad \t[14] Mabinay \t[15] Manjuyod \t[16] Pamplona \n[17] San Jose \t[18] Santa Catalina \t[19] Siaton \t[20] Sibulan \n[21] Tanjay City \t[22] Tayasan \t[23] Valencia \t[24] Vallehermoso \n[25] Zamboanguita \n";
                        cin >> cnum;
                        city = NegrosOriental[cnum];
                        break;
                   case 16:
                   //Aklan
                        cout << "\nCities:\n[1] Altavas \t[2] Balete \t[3] Banga \t[4] Batan \n[5] Buruanga \t[6] Ibajay \t[7] Kalibo \t[8] Lezo \n[9] Libaco \t[10] Madalag \t[11] Makato \t[12] Malay \n[13] Malinao \t[14] Nabas \t[15] New Washinton \t[16] Numancia \n[17] Tangalan \n";
                        cin >> cnum;
                        city = Aklan[cnum];
                        break;
                   case 17:
                   //Iloilo
                        cout << "\nCities:\n[1] Ajuy \t[2] Alimodian \t[3] Anilao \t[4] Badiangan \n[5] Balasan \t[6] Banate \t[7] Barotac Nuevo \t[8] Barotac Viejo \n[9] Batad \t[10] Bingawan \t[11] Cabanatuan \t[12] Calinog \n[13] Carles \t[14] Coception \t[15] Dingle \t[16] Duenas \n[17] Dumangas \t[18] Estancia \t[19] Guibal \t[20] Igbaras \n[21] Iloilo City \t[22] Janiuay \t[23] Lambunao \t[24] Leganes \n[25] Lemery \t[26] Leon \t[27] Maasin \t[28] Miagao \n[29] Mina \t[30] New Lucena \t[31] Onton \t[32] Passi City \n[33] Pavia \t[34] Pototan \t[35] San Dionisio \t[36] San Enrique \n[37] San Joaquin \t[38] San Miguel \t[39] San Rafael \t[40] Santa Barbara \n[41] Sara \t[42] Tigbauan \t[43] Tubungan \t[44] Zarraga  \n";
                        cin >> cnum;
                        city = Iloilo[cnum];
                        break;
                   }
            break;
        case 5:
        //Mindanao
        shipping = 85;
        td = "7 - 14 days";
            cout << "\n[1] Basilan \t[2] Surigao Del Sur  \t[3] Lanao Del Sur  \t[4] Agusan Del Sur  \n[5] North Cotabato  \t[6] Davao Del Sur  \t[7] Lanao Del Norte  \t[8] South Cotabato  \n[9] Davao Del Norte  \t[10] Surigao Del Norte  \t[11] Dinagat Island  \t[12] Compostela Valley  \n[13] Zamboanga Del Sur  \t[14] Bukidnon \t[15] Tawi-tawi  \t[16] Agusan Del Norte  \n[17] Zamboanga Del Norte  \t[18] Camiguin \t[19] Misamis Oriental  \t[20] Sarangani  \n[21] Misamis Occidental  \t[22] Sulu \t[23] Maguindanao \t[24] Cotabato \n[25] Davao Oriental  \t[26] Zamboaga Sibugay  \t[27] Sultan Kudarat\nEnter Mindanao Province: ";
            cin >> pnum;
            province = MProv[pnum];
            switch (pnum){
                   case 1:
                   //Basilan
                        cout << "\nCities:\n[1] Akbar \t[2] Al-Barka \t[3] Hadji Mohammad Ajul \t[4] Hadji Muhtamad \n[5] Isabela City \t[6] Lamitan City \t[7] Lantawan \t[8] Maluso \n[9] Sumipsip \t[10] Tabuan-Lasa \t[11] Tipo-Tipo \t[12] Tuburan \n[13] Ungkaya Pukan \n";
                        cin >> cnum;
                        city = Basilan[cnum];
                        break;
                   case 2:
                   //Surigao Del Sur 
                        cout << "\nCities:\n[1] Barobo \t[2] Bayabas \t[3] Bislig City \t[4] Cagwait \n[5] Cantilan \t[6] Carmen \t[7] Carrascal \t[8] Cortes \n[9] Hinatuan \t[10] Lanuza \t[11] Lianga \t[12] Lingig \n[13] Madrid \t[14] Marihatag \t[15] San Agustin \t[16] San Miguel \n[17] Tagbina \t[18] Tago \t[19] Tandag City\n";
                        cin >> cnum;
                        city = SurigaoDelSur[cnum];
                        break;
                   case 3:
                   //Lanao Del Sur 
                        cout << "\nCities:\n[1] Bacolod-Kalawi \t[2] Balabagan \t[3] Balindong \t[4] Bayang \n[5] Binidayan \t[6] Buadiposo-Buntong \t[7] Bubong \t[8] Bumbaran \n[9] Butig \t[10] Calanogas \t[11] Ditsaan-Ramain \t[12] Ganassi \n[13] Kapai \t[14] Kapatagan \t[15] Lumba-Bayabao \t[16] Lumbaca-Unayan \n[17] Lumbatan \t[18] Lumbayanaque \t[19] Madalum \t[20] Madamba  \n[21] Maguing \t[22] Malabang \t[23] Marantao \t[24] Marawi City \n[25] Marogong \t[26] Masiu \t[27] Mulondo \t[28] Pagayawan \n[29] Piagapo \t[30] Picong \t[31] Poona Bayabao \t[32] Pualas \n[33] Saguiaran \t[34] Sultan Dumalondong \t[35] Tagoloan Ii \t[36] Tamparam \n[37] Taraka \t[38] Tubaran \t[39] Tugaya \t[40] Wao \n";
                        cin >> cnum;
                        city = LanaoDelSur[cnum];
                        break;
                   case 4:
                   //Agusan Del Sur 
                        cout << "\nCities:\n[1] Bayugan City \t[2] Bunawan \t[3] Esperanza \t[4] La Paz \n[5] Loreto \t[6] Prosperidad \t[7] Rosario \t[8] San Francisco \n[9] San Luis \t[10] Santa Josefa \t[11] Sibagat \t[12] Talacogon \n[13] Trento \t[14] Veruela \n";
                        cin >> cnum;
                        city = AgusanDelSur[cnum];
                        break;
                   case 5:
                   //North Cotabato 
                        cout << "\nCities:\n[1] Alamanda \t[2] Aleosan \t[3] Antipas \t[4] Arakan \n[5] Banisilan \t[6] Carmen \t[7] Kabacan \t[8] Kidapawan City \n[9] Libungan \t[10] Magpet \t[11] Makilala \t[12] Matalam \n[13] Midsayap \t[14] Pigkawayan \t[15] Pikit \t[16] President Roxas \n[17] Tulunan \n";
                        cin >> cnum;
                        city = NorthCotabato[cnum];
                        break;
                   case 6:
                   //Davao Del Sur 
                        cout << "\nCities:\n[1] Bansan \t[2] Davao City \t[3] Digos City \t[4] Don Marcelino \n[5] Hagonoy \t[6] Jose Abad Santos \t[7] Kiblawan \t[8] Magsaysay \n[9] Malalag \t[10] Malita \t[11] Matanao \t[12] Padala \n[13] Santa Cruz \t[14] Santa Maria \t[15] Sarangani \t[16] Sulop \n";
                        cin >> cnum;
                        city = DavaoDelSur[cnum];
                        break;
                   case 7:
                   //Lanao Del Norte 
                        cout << "\nCities:\n[1] Bacolod \t[2] Baloi \t[3] Baroy \t[4] Iligan City \n[5] Kapatagan \t[6] Kauswagan \t[7] Kolambugan \t[8] Lala \n[9] Linamon \t[10] Magsaysay \t[11] Maigo \t[12] Matungao \n[13] Munai \t[14] Nunungan \t[15] Pantao Ragat \t[16] Pantar \n[17] Poona Piagapo \t[18] Salvador \t[19] Sapad \t[20] Sultan Naga Dimaporo \n[21] Tagoloan \t[22] Tangcal \t[23] Tubod \n";
                        cin >> cnum;
                        city = LanaoDelNorte[cnum];
                        break;
                   case 8:
                   //South Cotabato 
                        cout << "\nCities:\n[1] Banga \t[2] Genral Santos City \t[3] Koronadal City \t[4] Lake Sebu \n[5] Norala \t[6] Polomolok \t[7] Santo Nino \t[8] Surallah \n[9] Tampakan \t[10] Tantangan \n";
                        cin >> cnum;
                        city = SouthCotabato[cnum];
                        break;
                   case 9:
                   //Davao Del Norte 
                        cout << "\nCities:\n[1] Asuncion \t[2] Braulio E. Dujali \t[3] Carmen Talaingod \t[4] Isaland Garden City of Samal \n[5] Kapalong \t[6] New Corella \t[7] Panabo City \t[8] San Isidro \n[9] Santo Tomas \t[10] Tagum City \n";
                        cin >> cnum;
                        city = DavaoDelNorte[cnum];
                        break;
                   case 10:
                   //Surigao Del Norte 
                        cout << "\nCities:\n[1] Alegria \t[2] Bacuag \t[3] Burgos \t[4] Claver \n[5] Dapa \t[6] Del Carmen \t[7] General Luna \t[8] Gigaquit \n[9] Mainit \t[10] Malimono \t[11] Pilar \t[12] Placer \n[13] San Benito \t[14] San Francisco \t[15] San Isidro \t[16] Santa Monica \n[17] Sison \t[18] Socorro \t[19] Surigao City \t[20] Tagana-an \n[21] Tubod \n";
                        cin >> cnum;
                        city = SurigaoDelNorte[cnum];
                        break;
                   case 11:
                   //Dinagat Island 
                        cout << "\nCities:\n[1] Basilisa \t[2] Cagdianao \t[3] Dinagat \t[4] Libjo \n[5] Loreto \t[6] San Jose \t[7] Tubajon \n";
                        cin >> cnum;
                        city = DinagatIsland2[cnum];
                        break;
                   case 12:
                   //Compostela Valley 
                        cout << "\nCities:\nCompostela Valley\n";
                        cin >> cnum;
                        city = CompostelaValley[cnum];
                        break;
                   case 13:
                   //Zamboanga Del Sur 
                        cout << "\nCities:\n[1] Aurora \t[2] Bayog \t[3] Dimataling \t[4] Dinas \t[6] Dumalinao \t[7] Dumingag \t[8] Guipos \n[9] Josefina \t[10] Kumalarang \t[11] Labangan \t[12] Lakewood \n[13] Lapuyan \t[14] Mahayag \t[15] Margosatubig \t[16] Midsalip \n[17] Molave \t[18] Pagadian City \t[19] Pitogo \t[20] Ramon Magsaysay \n[21] San Miguel \t[22] San Pablo \t[23] Sominot \t[24] Tabina \n[25] Tambulig \t[26] Tigbao \t[27] Tukaran \t[28] Vicenzo A. Sagun \n[29] Zamboanga City \n";
                        cin >> cnum;
                        city = ZamboangaDelSur[cnum];
                        break;
                   case 14:
                   //Bukidnon
                        cout << "\nCities:\n[1] Baungon \t[2] Cabanglasan \t[3] Damulog \t[4] Dangcagan \n[5] Don Carlos \t[6] Impasug-ong \t[7] Kadingilan \t[8] Kalilangan \n[9] Kibawe \t[10] Kitaotao \t[11] Lantapan \t[12] Libona \n[13] Malaybay City \t[14] Malitbog \t[15] Manolo Fortich \t[16] Maramag \n[17] Pangantuzan \t[18] Quezon \t[19] San Fernando \t[20] Sumilao \n[21] Talakag \t[22] Valencia City \n";
                        cin >> cnum;
                        city = Bukidnon[cnum];
                        break;
                   case 15:
                   //Tawi-tawi 
                        cout << "\nCities:\n[1] Bongao \t[2] Languyan \t[3] Mapun \t[4] Panglima Sugala \n[5] Sapa-sapa \t[6] Sibutu \t[7] Simunul \t[8] Sitangkai \n[9] South Ubian \t[10] Tandubas \t[11] Turtle Island \n";
                        cin >> cnum; 
                        city = Tawitawi[cnum];
                        break;
                   case 16:
                   //Agusan Del Norte 
                        cout << "\nCities:\n[1] Buenavista \t[2] Butuan City \t[3] Cabadbaran City \t[4] Carmen \n[5] Jabonga \t[6] Kitcharao \t[7] Las Nieves \t[8] Magallanes \n[9] Nasipit \t[10] Remedios T. Romualdez \t[11] Santiago \t[12] Tubay \n";
                        cin >> cnum;
                        city = AgusanDelNorte[cnum];
                        break;
                   case 17:
                   //Zamboanga  Del  Norte  
                        cout << "\nCities:\n[1] Bacungan \t[2] Baliguian \t[3] Dapitan  City \t[4] Dipolog  City \n[5] Godod \t[6] Guitalac \t[7] Jose  Dalman \t[8] Kalawit \n[9] Katipunan \t[10] La  Libertad \t[11] Labason \t[12] Liloy \n[13] Manukan \t[14] Mutua \t[15] Pinan \t[16] Polanco \n[17] Pres.  Manuel  A. Roxas \t[18] Rizal \t[19] Salug \t[20] Sergio  Osmena  Sr. \n[21] Siayan \t[22] Sibuco \t[23] Sibutas \t[24] Sindangan \n[25] Siocon \t[26] Sirawai \t[27] Tampilisan  \n";
                        cin >> cnum;
                        city = ZamboangaDelNorte[cnum];
                        break;
                   case 18:
                   //Camiguin
                        cout << "\nCities:\n[1] Catarman \t[2] Guinsiliban \t[3] Mahinog \t[4] Mambajao \n[5] Sagay \n";
                        cin >> cnum;
                        city = Camiguin[cnum];
                        break;
                   case 19:
                   //Misamis  Oriental  
                        cout << "\nCities:\n[1] Alubijid \t[2] Balingasag \t[3] Balingoan \t[4] Binuangan \n[5] Cagayan  De  Oro  City \t[6] Claveria \t[7] El  Salvador  City \t[8] Gingoog  City \n[9] Gitagum \t[10] Initao \t[11] Jasaan \t[12] Kinoguitan \n[13] Lagonglong \t[14] Laguindingan \t[15] Libertad \t[16] Lugait \n[17] Magsaysay \t[18] Manticao \t[19] Medina \t[20] Naawan \n[21] Opol \t[22] Salay \t[23] Sugbongcogon \t[24] Tagoloan \n[25] Talisayan \t[26] Villanueva \n";
                        cin >> cnum;
                        city = MisamisOriental[cnum];
                        break;
                   case 20:
                   //Sarangani
                        cout << "\nCities:\n[1] Alabel \t[2] Glan \t[3] Kiamba \t[4] Maasim \n[5] Maitum \t[6] Malapatan \t[7] Malungon \n";
                        cin >> cnum; 
                        city = Sarangani[cnum];
                        break;
                   case 21:
                   //Misamis  Occidental  
                        cout << "\nCities:\n[1] Aloran \t[2] Baliangao \t[3] Bonifacio \t[4] Calamba \n[5] Clarin \t[6] Concepcion \t[7] Don  Victoriano  Chiongbian \t[8] Jimenez \n[9] Lopez  Jaena \t[10] Oroquieta  City \t[11] Ozamis  City \t[12] Pana-on \n[13] Plaridel \t[14] Sapang  Dalaga \t[15] Sinacaban \t[16] Tangub  City \n[17] Tudela \n";
                        cin >> cnum;
                        city = MisamisOccidental[cnum];
                        break;
                   case 22:
                   //Sulu
                        cout << "\nCities:\n[1] Hadji  Panglima  Tahil \t[2] Indanan \t[3] Jolo \t[4] Kalingalan  Caluag \n[5] Lungus \t[6] Luuk \t[7] Maimbung \t[8] Old  Panamao \n[9] Omar \t[10]Pandami \t[11] Panglima  Estino \t[12] Pangutaran \n[13] Parang \t[14] Pata \t[15] Patikul \t[16] Siasi \n[17] Talipao \t[18] Tapul \t[19] Tongkil \n";
                        cin >> cnum;
                        city = Sulu[cnum];
                        break;
                   case 23:
                   //Maguindanao
                        cout << "\nCities:\n[1] Ampatuan \t[2] Barrira \t[3] Bulaan \t[4] Buldon \n[5] Datu  Abdullak  Sanki \t[6] Datu  Anggal  Midtimbang \t[7] Datu  Blah  T.  Sinsuat \t[8] Datu  Hoffer  Ampatuan \n[9] Datu  Odin  Sinsuat \t[10] Datu  Paglas \t[11] Datu  Piang \t[12] Datu  Salibo \n[13] Datu  Saudi-Ampatuan \t[14] Datu  Unsay \t[15] Gen.  S.  K.  Pendatun \t[16] Guindulungan \n[17] Kabuntalan \t[18] Mamasapano \t[19] Mangundadatu \t[20] Matanog \n[21] Norther  Kabuntalan \t[22] Pagagawan \t[23] Pagalungan \t[24] Paglat \n[25] Pandag \t[26] Parang \t[27] Rajah  Buayan \t[28] Shariff  Aguak \n[29] Shariff  Saydona  Mustapha \t[30] South  Upi \t[31] Sultan  Kudarat \t[32] Sultan  Mastura \n[33] Sultan  Sa  Barongis \t[34] Talayan \t[35] Talitay \t[36] Upi \n";
                        cin >> cnum;
                        city = Maguindanao[cnum];
                        break;
                   case 24:
                   //Cotabato
                        cout << "\nCity: Cotabato\n";
                        city = Cotabato[1];
                        break;
                   case 25:
                   //Davao  Oriental  
                        cout << "\nCities:\n[1] Baganga \t[2] Banaybanay \t[3] Boston \t[4] Caraga \n[5] Cateel \t[6] Governador  Generoso \t[7] Lupon  Many \t[8] Mati  City \n[9] San  Isidro \t[10] Tarragona \n";
                        cin >> cnum;
                        city = DavaoOriental[cnum];
                        break;
                   case 26:
                   //Zamboaga  Sibugay 
                        cout << "\nCities:\nZamboanga Sibugay";
                        cin >> cnum;
                        city = ZamboangaSibugay[cnum];
                        break;
                   case 27:
                   //Sultan  Kudarat  
                        cout << "\nCities:\n[1] Bagumbayan \t[2] Columbio \t[3] Esperanza \t[4] Isulan \n[5] Kalamansig \t[6] Lambayong \t[7] Lebak \t[8] Lutayan \n[9] Palimbang \t[10] President  Quirino \t[11] Sen.  Ninoy  Aquino \t[12] Tacurong  City \n";
                        cin >> cnum;
                        city = SultanKudarat[cnum];
                        break;
                   }
            break;
    }
 
 	getline(cin, y); //user input - specific address 
    cout << "\nEnter your Baranggay: ";
    getline(cin, brgy);
    cout << "\nEnter your Street: ";
    getline(cin, street);
    cout << "\nEnter your House Number: ";
    getline(cin, hnum);
    cout << "\n_________________________________________________\n";
    cout << "\nYour address is : " << hnum << " " << street << " " << brgy << " " << city << " " << province << " " << region[rnum];
    
    do {
		cout << "\n\t    _____________________________\n";
		cout << "\t   |\t\t\t         |\n";
		cout << "\t   |   Is the address correct?   |\n";
		cout << "\t   |\t[Y] Yes\t\t\t |\n";
		cout << "\t   |\t[N] No\t\t\t |\n";
		cout << "\t   |_____________________________|\n";
		cout << "\n\t        Enter Selection: ";
		
        cin >> correct;
        if (correct == 'y' || correct == 'Y'){
				cr = 0;
                break;
                }
                else if (correct == 'n' || correct == 'N') {
                     cout << "Redirecting . . .\nPress Enter to proceed.";
                     getch();
                     cr =0;
                     system ("cls");
                     goto addresscheck;
                     }
                     else {
                          cout << "  Invalid Input.";
                          getch();
                          cr =1;
                          }
    }while (cr == 1);

	cout << "\n"; 
    system("PAUSE");
    loading(); 	// loading 
    system("cls");
    
    s_voucher:	//LOOP Shipping / Discount Voucher
    string sv, dv;
    char addsv, adddv;
    float PD, SD, total;
    int s, d;
     
    cout << "\n\t    _______________________________\n";
	cout << "\t   |\t\t\t           |\n";
	cout << "\t   |   Acquire Shipping Voucher?   |\n";
	cout << "\t   |\t[Y] Yes\t\t\t   |\n";
	cout << "\t   |\t[N] No\t\t\t   |\n";
	cout << "\t   |_______________________________|\n";
	cout << "\n\t        Enter Selection: ";
    cin >> addsv;
    if (addsv == 'Y' || addsv == 'y'){
              do {
                     cin.ignore(); 
                     s=0; 
                     cout << "\nHere are the Shipping Vouchers available for you!";
                     cout << "\nFT50 - 50% shipping discount for First Time User only.\nSP500 - 50% shipping discount. minimum of Php500 purchase worth of purchase\nSP1K - 100% shipping discount. minimum of Php1000 worth of purchase\nX - to cancel\n";
                     cout << "\nEnter Shipping Voucher: ";
                     getline(cin,sv);
                     if (sv == "FT50"){
                        SD = shipping * 0.5;
                        //shipping -= SD;
                        }
                        else if (sv == "SP500" && totalprice >= 500){
                             SD = shipping * 0.5;
                             //shipping -= SD;
                             }
                        else if (sv == "SP1K" && totalprice >= 1000){
                             SD = shipping * 1;
                             //shipping -= SD;
                             }
                    	else if (sv == "X" || sv == "x"){
                    		SD = 0; 
                    		break;
						}
                        else {
                             cout << "\nInvalid Voucher Code. Press Enter to try again.";
                             getch();
                             s=1;
                             }
              } while (s == 1); 
    }
    else SD = 0; 
    
    cout << "\n\t    _______________________________\n";
	cout << "\t   |\t\t\t           |\n";
	cout << "\t   |   Acquire Discount Voucher?   |\n";
	cout << "\t   |\t[Y] Yes\t\t\t   |\n";
	cout << "\t   |\t[N] No\t\t\t   |\n";
	cout << "\t   |_______________________________|\n";
	cout << "\n\t        Enter Selection: ";
    cin >> adddv;
    if (adddv == 'Y' || adddv == 'y'){
              do{
              		cin.ignore(); 
                     d=0;
                     cout << "\nHere are the Discount Vouchers available for you!";
                     cout << "\nMN500 - 10% discount. minimum of Php500 purchase\nMN1K - 15% discount. minimum of Php1000 purchase\nMN2K - 20% discount. minimum of Php2000 purchase\nX - to cancel\n";
                     cout << "\nEnter Discount Voucher: ";
                     getline(cin,dv);
                     if (dv == "MN500" && totalprice >= 500){
                            PD = totalprice * 0.1;
                            //totalprice -= PD;
                           }
                           else if (dv == "MN1K"&& totalprice >= 1000){
                                PD = totalprice * 0.15;
                                //totalprice -= PD;
                                }
                           else if (dv == "MN2K" && totalprice >= 2000){
                                PD = totalprice * 0.2;
                                //totalprice -= PD;
                                }
                           else if (dv == "X" || dv == "x"){
                           		PD = 0; 
                           		break; 
						   }
                           else {
                                cout << "\nInvalid Voucher Code or voucher not applicable to you. Press Enter to try again.";
                                getch();
                                d=1;
                                }
                     }while (d==1);
              }
    else PD = 0; 
              
              getch();
              loading(); 	//loading 
              system("cls"); 
              cout << "\n_________________________________________________\n\n";
			  cout << "   RECEIPT";
			  cout << "\n_________________________________________________\n\n";
              cout << "\nTotal Purchase\t\t  : " << totalprice;
              if (adddv == 'Y' || adddv == 'y'){
                        cout << "\nDiscount Voucher\t  : " << PD;
                        cout << "\nTotal when deducted\t  : " << totalprice-PD;
                        totalprice-=PD;
                        }
              cout << "\nShipping Fee\t\t  : " << shipping;
              if (addsv == 'Y' || addsv == 'y'){
                        cout << "\nShipping Voucher\t  : " << SD;
                        cout << "\nTotal when deducted\t  : " << shipping-SD;
                        shipping-=SD;
                        }
              cout << "\n\nGross Total\t\t  : " << totalprice + shipping;
              
              cout << "\n\nThe item/s is to be sent to :";
              cout << "\n" << hnum << " " << street << " " << brgy << " " << city << " " << province << " " << region[rnum] ;
              cout << "\nEstimated Time of delivery: " << td;
  
    return exit_program(); 
	}

void checkout (int item[20], int nm, int nm2, int nm3, string orders[20], float amount[20]) { //reference from void cart
	int couterA=1, counterB=1, counterC=1; 
	float totalprice;
	system("CLS"); 
	cout << "\n_________________________________________________\n\n";
	cout << "   ORDER LIST/S";
	cout << "\n_________________________________________________\n";
	while (couterA < nm) {
		cout << "\n  " << item[couterA];
		while (counterB < nm2) {
			cout << "\t" << orders[counterB];
			while (counterC < nm3) {
				cout << "\t" << amount[counterC]; 
				break; 
			}
			counterC++; 
			break; 
		}
		counterB++; 
		couterA++; 
		continue; 
        }
    while (counterC>=0){
          totalprice += amount[counterC];
          counterC--;
          }
          
    cout << "\n\nThe total amount of your purchase is : " << totalprice << "\n";
	
	prc:
	cout << "\n\nPress any key to proceed to Payment and Address . . .";
	getch(); 
    bill_address(totalprice);  
}

void cart(int& in1, int (&item)[20], int &nm, int &nm2, int &nm3, string (&orders)[20],	float (&amount)[20]) {
	
	int pcode, code, in2, qty, s; 
	
	loading(); 	//loading 
 	default_cart:	//LOOP cart 
	system ("CLS"); 
	cout << "\n    _____________________________________________________________\n\n";
	cout << "\t\t\t         CART\n";
	cout << "    _____________________________________________________________\n\n";
	cout << "\t    ___________________________\n";
	cout << "\t   |\t\t\t       |\n";
	cout << "\t   |\t[1] Order\t       |\n";
	cout << "\t   |\t[2] Return\t       |\n";
	cout << "\t   |___________________________|\n";
	cout << "\n\t        Enter Selection: ";
	cin >> in1; 
	
	switch(in1) {
		default_entercode: 	//LOOP enter product code 
		case 1:
			cout << "\n\t     Enter product code: "; 
			cin >> pcode; 
			item[nm] = pcode;	//cin array 
			nm++; 				//add array value 
			switch(pcode) {
				// Men's Apparel 
				case 111:							//LSBC Maroon 
					orders[nm2] = pname[0]; 
					nm2++;
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[0] * qty;
						nm3++;
						s++;
					break;
				case 112:							//LSBC Black 
					orders[nm2] = pname[1]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[0] * qty; 
						nm3++;
					break;
				case 113:							//LSBC Pink 
					orders[nm2] = pname[2]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[0] * qty; 
						nm3++;
					break;
				case 114:							//LSBC White 
					orders[nm2] = pname[3]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[0] * qty; 
						nm3++;
					break;
				case 115:							//LSBC Gray 
					orders[nm2] = pname[4]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[0] * qty; 
						nm3++;
					break;
				case 121:							//LSDJ BS 
					orders[nm2] = pname[5]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 122:							//LSDJ BM 
					orders[nm2] = pname[6]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 123:							//LSDJ BL 
					orders[nm2] = pname[7]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 124:							//LSDJ BXL 
					orders[nm2] = pname[8]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 125:							//LSDJ DBS 
					orders[nm2] = pname[9]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 126:							//LSDJ DBM 
					orders[nm2] = pname[10]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 127:							//LSDJ DBL 
					orders[nm2] = pname[11]; 
					nm2++; 
					cout << "\t\t       Quantity: ";  
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 128:							//LSDJ DBXL 
					orders[nm2] = pname[12]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[1] * qty; 
						nm3++;
					break;
				case 131:							//SCDP 
					orders[nm2] = pname[13]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[2] * qty; 
						nm3++;
					break;
				// Women's Apparel 
				case 211:							//VBH BS 
					orders[nm2] = pname[14]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[3] * qty; 
						nm3++;
					break;
				case 212:							//VBH BM 
					orders[nm2] = pname[15]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[3] * qty; 
						nm3++;
					break;
				case 213:							//VBH BL 
					orders[nm2] = pname[16]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[3] * qty; 
						nm3++;
					break;
				case 214:							//VBH DBS 
					orders[nm2] = pname[17]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[3] * qty; 
						nm3++;
					break;
				case 215:							//VBH DBM 
					orders[nm2] = pname[18]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[3] * qty; 
						nm3++;
					break;
				case 216:							//VBH DBL 
					orders[nm2] = pname[19]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[3] * qty; 
						nm3++;
					break;
				case 221:							//LHH AS
					orders[nm2] = pname[20]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[4] * qty; 
						nm3++;
					break;
				case 222:							//LHH AM
					orders[nm2] = pname[21]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[4] * qty; 
						nm3++;
					break;
				case 223:							//LHH AL
					orders[nm2] = pname[22]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[4] * qty; 
						nm3++;
					break;
				case 224:							//LHH BS
					orders[nm2] = pname[23]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[4] * qty; 
						nm3++;
					break;
				case 225:							//LHH BM
					orders[nm2] = pname[24]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[4] * qty; 
						nm3++;
					break;
				case 226:							//LHH BL
					orders[nm2] = pname[25]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[4] * qty; 
						nm3++;
					break;
				case 231:							//BS Green
					orders[nm2] = pname[26]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[5] * qty; 
						nm3++;
					break;
				case 232:							//BS Black
					orders[nm2] = pname[27]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[5] * qty; 
						nm3++;
					break;
				// Gadgets, Computers 
				case 311:							//Acer N5 
					orders[nm2] = pname[28]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[6] * qty; 
						nm3++;
					break;
				case 321:							//DJI
					orders[nm2] = pname[29]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[7] * qty; 
						nm3++;
					break;
				case 331:							//SG S22 White
					orders[nm2] = pname[30]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[8] * qty; 
						nm3++;
					break;
				case 332:							//SG S22 Gold
					orders[nm2] = pname[31]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[8] * qty; 
						nm3++;
					break;
				case 333:							//SG S22 Black
					orders[nm2] = pname[32]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[8] * qty; 
						nm3++;
					break;	
				// Personal and Health Care 
				case 411:							//KSFM White 
					orders[nm2] = pname[33]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[9] * qty; 
						nm3++;
					break;
				case 412:							//KSFM Black  
					orders[nm2] = pname[34]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[9] * qty; 
						nm3++;
					break;	
				case 413:							//KSFM Turquoise  
					orders[nm2] = pname[35]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[9] * qty; 
						nm3++;
					break;	
				case 421:							//PMS AV 
					orders[nm2] = pname[36]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[10] * qty; 
						nm3++;
					break;
				case 422:							//PMS CC 
					orders[nm2] = pname[37]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[10] * qty; 
						nm3++;
					break;
				case 423:							//PMS K 
					orders[nm2] = pname[38]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[10] * qty; 
						nm3++;
					break;
				case 431:							//RMD IC
					orders[nm2] = pname[39]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[11] * qty; 
						nm3++;
					break;
				case 432:							//RMD QD
					orders[nm2] = pname[40]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[11] * qty; 
						nm3++;
					break;
				//Makeup and Perfumes 
				case 511:							//CK
					orders[nm2] = pname[41]; 
					nm2++; 
					cout << "\t\t       Quantity: "; 
					cin >> qty; 
						amount[nm3] = price[12] * qty; 
						nm3++;
					break;
				case 521:							//DDCC Ivory  
					orders[nm2] = pname[42]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[13] * qty; 
						nm3++;
					break;
				case 522:							//DDCC Natural
					orders[nm2] = pname[43]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[13] * qty; 
						nm3++;
					break;
				case 531:							//GIADS 
					orders[nm2] = pname[44]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[14] * qty; 
						nm3++;
					break;
				//Home Appliances 
				case 611:							//MAF 
					orders[nm2] = pname[45]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[15] * qty; 
						nm3++;
					break;
				case 621:							//TMREF 
					orders[nm2] = pname[46]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[16] * qty; 
						nm3++;
					break;
				case 631:							//HSSEK 
					orders[nm2] = pname[47]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[17] * qty; 
						nm3++;
					break;
				//Groceries 
				case 711:							//OMP 
					orders[nm2] = pname[48]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[18] * qty; 
						nm3++;
					break;
				case 721:							//OCP 
					orders[nm2] = pname[49]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[19] * qty; 
						nm3++;
					break;
				case 731:							//ECB 
					orders[nm2] = pname[50]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[20] * qty; 
						nm3++;
					break;
				//Toys, Games 
				case 811:							//TLZ BW 
					orders[nm2] = pname[51]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[21] * qty; 
						nm3++;
					break;
				case 821:							//TLZ LAFT 
					orders[nm2] = pname[52]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[22] * qty; 
						nm3++;
					break;
				case 831:							//MLS
					orders[nm2] = pname[53]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[23] * qty; 
						nm3++;
					break;
				//Sports and Workout 
				case 911:							//APUS 
					orders[nm2] = pname[54]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[24] * qty; 
						nm3++;
					break;
				case 921:							//BBS 
					orders[nm2] = pname[55]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[25] * qty; 
						nm3++;
					break;
				case 931:							//MPVD Black 
					orders[nm2] = pname[56]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[26] * qty; 
						nm3++;
					break;
				case 932:							//MPVD Green  
					orders[nm2] = pname[57]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[26] * qty; 
						nm3++;
					break;
				case 933:							//MPVD Red 
					orders[nm2] = pname[58]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[26] * qty; 
						nm3++;
					break;
				//Bags and Shoes 
				case 1011:							//S OW 6 
					orders[nm2] = pname[59]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[27] * qty; 
						nm3++;
					break;
				case 1012:							//S OW 7 
					orders[nm2] = pname[60]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[27] * qty; 
						nm3++;
					break;
				case 1013:							//S OW 8 
					orders[nm2] = pname[61]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[27] * qty; 
						nm3++;
					break;
				case 1014:							//S B 6 
					orders[nm2] = pname[62]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[27] * qty; 
						nm3++;
					break;
				case 1015:							//S B 7 
					orders[nm2] = pname[63]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[27] * qty; 
						nm3++;
					break;
				case 1016:							//S B 8 
					orders[nm2] = pname[64]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[27] * qty; 
						nm3++;
					break;
				case 1021:							//MSB Brown
					orders[nm2] = pname[65]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[28] * qty; 
						nm3++;
					break;
				case 1022:							//MSB Khaki
					orders[nm2] = pname[66]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[28] * qty; 
						nm3++;
					break;
				case 1023:							//MSB Blue
					orders[nm2] = pname[67]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[28] * qty; 
						nm3++;
					break;
				case 1031:							//TB CB
					orders[nm2] = pname[68]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[29] * qty; 
						nm3++;
					break;
				case 1032:							//TB BB
					orders[nm2] = pname[69]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[29] * qty; 
						nm3++;
					break;
				case 1033:							//TB KB
					orders[nm2] = pname[70]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[29] * qty; 
						nm3++;
					break;
				//Jewelry 
				case 1111:							//PN Black 
					orders[nm2] = pname[71]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[30] * qty; 
						nm3++;
					break;
				case 1112:							//PN Steel 
					orders[nm2] = pname[72]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[30] * qty; 
						nm3++;
					break;
				case 1113:							//PN Blue
					orders[nm2] = pname[73]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[30] * qty; 
						nm3++;
					break;
				case 1121:							//RCN
					orders[nm2] = pname[74]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[31] * qty; 
						nm3++;
					break;
				case 1131:							//CN
					orders[nm2] = pname[75]; 
					nm2++; 
					cout << "\t\t       Quantity: ";
					cin >> qty; 
						amount[nm3] = price[32] * qty; 
						nm3++;
					break;
				default: 
					nm--; 
					cout << "\nInvalid Input.\n";
					system("PAUSE"); 
					goto default_entercode; 
			}

				default_neworder: //LOOP enter another order / order list 
				do {
					cout << "\n\t    _________________________________\n";
					cout << "\t   |\t\t\t\t     |\n";
					cout << "\t   |\t[1] Enter Another\t     |\n";
					cout << "\t   |\t[2] Proceed to Order List    |\n";
					cout << "\t   |_________________________________|\n";
					cout << "\n\t        Enter Selection: ";
					cin >> in2;
					switch (in2) {
						case 1:
							goto default_entercode; 
							break;
						case 2:
							code++; 
							goto order_list; 
							break; 
						default:
							cout << "\nInvalid. Press any key to try again.\n";
							getch(); 
							goto default_neworder; 
					}
				}
				while (code == 0); 
			break; 
		case 2:
			return; 
			
		default:
			cout << "Invalid Input. Please try again.";
			getch(); 
			goto default_cart; 
	}
	
	order_list: 	//LOOP order list 
	int n=1, n2=1, n3=1;
	cout << "\n_________________________________________________\n\n";
	cout << "   ORDER/S";
	cout << "\n_________________________________________________\n\n";
	cout << "  Product Code\t\t Product Name\t\t Total Amount\n"; 
	
	while (n < nm) {
		cout << "\n      " << item[n];
		while (n2 < nm2) {
			cout << "\t   " << orders[n2];
			while (n3 < nm3) {
				cout << "\t     " << amount[n3]; 
				break; 
			}
			n3++; 
			break; 
		}
		n2++; 
		n++; 
		continue; 
	}
	
	int choice; 
	cout << "\n\nPress any key to proceed to checkout . . .";
	getch(); 
	checkout(item, nm, nm2, nm3, orders, amount); 
}


int main() {

	mainONE: //LOOP login / signup 	
    	
    int menuLP = 0;
    char menu1;
    string username, password;
    int att = 0; 	
	
	loading(); 	//loading 
    do {
    	system ("CLS"); 
		cout << "\t\t\t\t _____ _____    __ _____ _____ _____ _____ \n";
		cout << "\t\t\t\t|     |  _  |__|  |  _  |  _  |   __|   __|\n";
		cout << "\t\t\t\t| | | |     |  |  |     |   __|   __|   __|\n";
		cout << "\t\t\t\t|_|_|_|__|__|_____|__|__|__|  |_____|_____|\n";
		cout << "\t\t\t    ---------------------------------------------------\n";
		cout << "\t\t\t\t The leading shopping platform on Morayta!\n\n";
		cout << "\t\t\t        ___________________________________________\n";
	    cout << "\t\t\t       |\t\t\t\t\t   |\n";
	    cout << "\t\t\t       |\t       WELCOME, USER!\t\t   |\n";
	    cout << "\t\t\t       | Don't have an account yet? Sign Up first! |\n";
	    cout << "\t\t\t       |                                           |\n";
	    cout << "\t\t\t       |\t\t [L] Log In\t\t   |\n";
		cout << "\t\t\t       |\t\t [S] Sign Up\t\t   |\n";
		cout << "\t\t\t       |\t\t [X] Exit\t\t   |\n";
		cout << "\t\t\t       |___________________________________________|\n\n";
		cout << "\t\t\t\t\t     Enter Selection: ";
		cin >> menu1;
    
		switch(menu1){
            	case 'l': case 'L':
                	cout << "\nYou will be directed to the LOG IN page . . .\n";
                    system("PAUSE");
                    login(username, password, att);
                    	if (att == 4) {
                    		goto mainONE; 
                    		menuLP--; 
						}
                    menuLP++;
                    break;
            	case 's': case 'S':
                    cout << "\nYou will be directed to the SIGN UP page . . .\n";
                    system("PAUSE");
                    signup(username, password);
                    getch();
                    system("cls");
                    break;
                case 'X': case 'x':
                	cout << endl;
                	system("PAUSE");
                	cout << "\nThank You!\n";
                	exit(0); 
                	break;
            	default:
                	cout << "\nInvalid Key. Press any key to try again.";
                    getch();
                    system("cls");
                	}
	} while (menuLP == 0);

    system("PAUSE");


	mainTWO:	//LOOP home page 
	    
	int menu2=0;	int menustop=0; 
	int cart_return=0, cart_return_stop=0; 
	int in1=0, categ;
	
	int item[20]={};
	string orders[20]={};
	float amount[20]={};
	int nm = 1, nm2 = 1, nm3 = 1; 

	loading(); 	//loading 
	do {
		system ("CLS"); 
		cout << "\n\t\t\t\t- - - - - - - -  WELCOME TO  - - - - - - - -\n";
		cout << "\t\t\t\t _____ _____    __ _____ _____ _____ _____ \n";
		cout << "\t\t\t\t|     |  _  |__|  |  _  |  _  |   __|   __|\n";
		cout << "\t\t\t\t| | | |     |  |  |     |   __|   __|   __|\n";
		cout << "\t\t\t\t|_|_|_|__|__|_____|__|__|__|  |_____|_____|\n";
		cout << "\t\t\t\t\t    ___________________\n";
		cout << "\t\t\t\t\t   |\t\t       |\n";
		cout << "\t\t\t\t\t   |\t[1] Shop       |\n";
		cout << "\t\t\t\t\t   |\t[2] Cart       |\n";
		cout << "\t\t\t\t\t   |\t[3] Sign Out   |\n";
		cout << "\t\t\t\t\t   |___________________|\n\n";
		cout << "\t\t\t\t\t    Enter Selection: ";
		cin >> menu2; 
		
		switch (menu2) {
			case 1: 
				backtoshop: 	//LOOP from cart return to shop 
				cout << "\nYou will be directed to SHOP page . . .\n";
				system("PAUSE");
                shop();
                shop_categ(categ); 
                menustop++; 
                if (categ == 0){	//shop exit/return to home 
                          goto mainTWO;
                          }
                break; 
            case 2: 
            	cout << "\nYou will be directed to CART page . . .\n";
                system("PAUSE");
                cart(in1, item, nm, nm2, nm3, orders, amount); 
                menustop++; 
                if (in1 == 2){	//cart return to previous page 
                		  cout << "\n"; 
                		  system("PAUSE");
                          goto mainTWO; 
                          }
                break; 
            case 3: 
            	cout << "\n\t\t\t\t\t  Thank you for shopping!\n\n";
            	system("PAUSE"); 
            	goto mainONE; 
            	break; 
            default: 
            	cout << "\nInvalid Input. Please try again."; 
            	getch();  
            	system ("CLS"); 
		}
	}
	while (menustop == 0); 

	default_cartreturn: //LOOP from product to cart/home 
	do {
		cout << "\n\n\t    ___________________________\n";
		cout << "\t   |\t\t\t       |\n";
		cout << "\t   |\t[1] Proceed to Cart    |\n";
		cout << "\t   |\t[2] Return\t       |\n";
		cout << "\t   |___________________________|\n";
		cout << "\n\t        Enter Selection: ";
		cin >> cart_return; 
		
		switch (cart_return) {
			case 1: 
				cout << "\n\nYou will be directed to CART page . . .\n";
	            system("PAUSE");
	            cart(in1, item, nm, nm2, nm3, orders, amount); 
	            if (in1 == 2){
                          goto backtoshop;
                          } 
            	cart_return_stop++; 
            	break;
            case 2: 
            	cout << "\n   Press any key to go back . . ."; 
            	getch(); 
            	shop(); 
            	shop_categ(categ);
                if (categ == 0){ 	//exit categories 
                          goto mainTWO;
                          } 
            	cart_return_stop = 0; 
            	break; 
            default: 
            	cout << "\n\tInvalid input. Please try again.\n"; 
            	getch(); 
            	goto default_cartreturn; 
		}
	}
	while (cart_return_stop == 0); 
	
    return 0;
}
