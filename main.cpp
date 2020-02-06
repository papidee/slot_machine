#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

int credits = 0;
int* credits_ptr = &credits;
int TotalPointsWon = 0;

int func(){
	int a = 10;
	for(int i = 0; i < a; i++){
		cout<<1 + (rand() % 6)<<endl;
	}
	cout<<"End"<<endl;
}

void showSlotState(char SlotState1[], char SlotState2[], char SlotState3[]){
	cout<<"|"<<SlotState1[0]<<"|"<<SlotState2[0]<<"|"<<SlotState3[0]<<"|"<<endl;
	cout<<"|"<<SlotState1[1]<<"|"<<SlotState2[1]<<"|"<<SlotState3[1]<<"|"<<endl;
	cout<<"|"<<SlotState1[2]<<"|"<<SlotState2[2]<<"|"<<SlotState3[2]<<"|"<<endl;
}

bool GetResult(char tempSlot1[], char tempSlot2[], char tempSlot3[]){

	if(((tempSlot1[0]==tempSlot2[0]) and (tempSlot2[0]==tempSlot3[0])) and (((tempSlot1[0]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[2])) or ((tempSlot1[2]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[0])))){
		//Double Winning Pattern 1 Horizontal Top AND Slant Top to Bottom OR Slant Bottom to Top
		if(((tempSlot1[0]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[2]))){
			switch(tempSlot1[0]){
			case 'S':
				credits += 200;
				TotalPointsWon += 200;
				cout<<"JACKPOT 2 COMBO 777!!!!"<<endl;
				break;
			case 'M':
				credits	+= 10;
				TotalPointsWon += 10;
				cout<<"YOU WON A 2 COMBO MONKEY!!!!"<<endl;
				break;
			case 'B':
				credits += 20;
				TotalPointsWon += 20;
				cout<<"YOU WON A 2 COMBO BANANA!!!!"<<endl;
			case 'C':
				credits += 30;
				TotalPointsWon += 30;
				cout<<"YOU WON A 2 COMBO CAR!!!!"<<endl;	
						
			}
		}
		else{
			switch(tempSlot3[0]){
			case 'S':
				credits += 200;
				TotalPointsWon += 200;
				cout<<"JACKPOT 2 COMBO 777!!!!"<<endl;
				break;
			case 'M':
				credits	+= 10;
				TotalPointsWon += 10;
				cout<<"YOU WON A 2 COMBO MONKEY!!!!"<<endl;
				break;
			case 'B':
				credits += 20;
				TotalPointsWon += 20;
				cout<<"YOU WON A 2 COMBO BANANA!!!!"<<endl;
			case 'C':
				credits += 30;
				TotalPointsWon += 30;
				cout<<"YOU WON A 2 COMBO CAR!!!!"<<endl;	
						
			}	
		}
	}
	else if(((tempSlot1[1]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[1])) and (((tempSlot1[0]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[2])) or ((tempSlot1[2]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[0])))){
		//Double Winning Pattern 2 Horizontal Middle AND Slant Top to Bottom OR Slant Bottom to Top
			switch(tempSlot2[1]){
			case 'S':
				credits += 200;
				TotalPointsWon += 200;
				cout<<"JACKPOT 2 COMBO 777!!!!"<<endl;
				break;
			case 'M':
				credits	+= 10;
				TotalPointsWon += 10;
				cout<<"YOU WON A 2 COMBO MONKEY!!!!"<<endl;
				break;
			case 'B':
				credits += 20;
				TotalPointsWon += 20;
				cout<<"YOU WON A 2 COMBO BANANA!!!!"<<endl;
			case 'C':
				credits += 30;
				TotalPointsWon += 30;
				cout<<"YOU WON A 2 COMBO CAR!!!!"<<endl;	
						
			}
		
	}
	else if(((tempSlot1[2]==tempSlot2[2]) and (tempSlot2[2]==tempSlot3[2])) and (((tempSlot1[0]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[2])) or ((tempSlot1[2]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[0])))){
		//Double Winning Pattern 3 Horizontal Bottom AND Slant Top to Bottom OR Slant Bottom to Top
		if((tempSlot1[0]==tempSlot2[1]) and (tempSlot2[1]==tempSlot3[2])){
			switch(tempSlot2[1]){
			case 'S':
				credits += 200;
				TotalPointsWon += 200;
				cout<<"JACKPOT 2 COMBO 777!!!!"<<endl;
				break;
			case 'M':
				credits += 10;
				TotalPointsWon += 10;
				cout<<"YOU WON A 2 COMBO MONKEY!!!!"<<endl;
				break;
			case 'B':
				credits += 20;
				TotalPointsWon += 20;
				cout<<"YOU WON A 2 COMBO BANANA!!!!"<<endl;
			case 'C':
				credits += 30;
				TotalPointsWon += 30;
				cout<<"YOU WON A 2 COMBO CAR!!!!"<<endl;	
						
			}
		}
		else{
			switch(tempSlot2[2]){
			case 'S':
				credits += 200;
				TotalPointsWon += 200;
				cout<<"JACKPOT 2 COMBO 777!!!!"<<endl;
				break;
			case 'M':
				credits	+= 10;
				TotalPointsWon += 10;
				cout<<"YOU WON A 2 COMBO MONKEY!!!!"<<endl;
				break;
			case 'B':
				credits += 20;
				TotalPointsWon += 20;
				cout<<"YOU WON A 2 COMBO BANANA!!!!"<<endl;
			case 'C':
				credits += 30;
				TotalPointsWon += 30;
				cout<<"YOU WON A 2 COMBO CAR!!!!"<<endl;	
						
			}
		}
	}
	else if((tempSlot1[0]==tempSlot2[0] and tempSlot2[0]==tempSlot3[0]) and (tempSlot1[1]==tempSlot2[1] and tempSlot2[1]==tempSlot3[1])){
		//Double Winning Pattern 4 Horizontal Top and Horizontal Middle
		if(tempSlot1[0]=='S' and tempSlot1[1]=='S'){		//SevenSeven Combo														
			credits += 200;
			TotalPointsWon += 200;
			cout<<"YOU WON A 2 COMBO 777!!!!"<<endl;
		}
		else if(tempSlot1[0]=='S' and tempSlot1[1]=='M'){	//SevenMonkey Combo
			credits += 105;
			TotalPointsWon += 105;
			std::cout<<"COMBO SEVEN'S AND MONKEYS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='S' and tempSlot1[1]=='B'){	//SevenBanana Combo
			credits += 110;
			TotalPointsWon += 110;
			std::cout<<"COMBO SEVEN'S AND BANANAS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='S' and tempSlot1[1]=='C'){	//SevenCars Combo
			credits += 115;
			TotalPointsWon += 115;
			std::cout<<"COMBO SEVEN'S AND CARS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='M' and tempSlot1[1]=='M'){	//MonkeyMonkey Combo
			credits += 10;
			TotalPointsWon += 10;
			std::cout<<"YOU WON A 2 COMBO MONKEYS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='M' and tempSlot1[1]=='B'){	//MonkeyBanana Special Combo
			credits += 50;
			TotalPointsWon += 50;
			std::cout<<"YOU WON A SPECIAL COMBO MONKEYS AND BANANAS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='M' and tempSlot1[1]=='C'){	//MonkeyCars Combo
			credits += 20;
			TotalPointsWon += 20;
			std::cout<<"YOU WON A MONKEYS AND CARS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='B' and tempSlot1[1]=='B'){	//BananaBanana Combo
			credits += 20;
			TotalPointsWon += 20;
			std::cout<<"YOU WON 2 BANANAS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='B' and tempSlot1[1]=='C'){	//BananaCars Combo
			credits += 25;
			TotalPointsWon += 25;
			std::cout<<"YOU WON BANANA AND CARS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='C' and tempSlot1[1]=='C'){
			credits += 30;
			TotalPointsWon += 30;
			std::cout<<"YOU WON A DOUBLE CARS COMBO!!!!"<<std::endl;
		}	
		
	}
	else if((tempSlot1[0]==tempSlot2[0] and tempSlot2[0]==tempSlot3[0]) and (tempSlot1[2]==tempSlot2[2] and tempSlot2[2]==tempSlot3[2])){
		//Double Winning Pattern 5 Horizontal Top and Horizontal Bottom
		if(tempSlot1[0]=='S' and tempSlot1[2]=='S'){		//SevenSeven Combo														
			credits += 200;
			TotalPointsWon += 200;
			cout<<"YOU WON A 2 COMBO 777!!!!"<<endl;
		}
		else if(tempSlot1[0]=='S' and tempSlot1[2]=='M'){	//SevenMonkey Combo
			credits += 105;
			TotalPointsWon += 105;
			std::cout<<"COMBO SEVEN'S AND MONKEYS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='S' and tempSlot1[2]=='B'){	//SevenBanana Combo
			credits += 110;
			TotalPointsWon += 110;
			std::cout<<"COMBO SEVEN'S AND BANANAS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='S' and tempSlot1[2]=='C'){	//SevenCars Combo
			credits += 115;
			TotalPointsWon += 115;
			std::cout<<"COMBO SEVEN'S AND CARS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='M' and tempSlot1[2]=='M'){	//MonkeyMonkey Combo
			credits += 10;
			TotalPointsWon += 10;
			std::cout<<"YOU WON A 2 COMBO MONKEYS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='M' and tempSlot1[2]=='B'){	//MonkeyBanana Special Combo
			credits += 50;
			TotalPointsWon += 50;
			std::cout<<"YOU WON A SPECIAL COMBO MONKEYS AND BANANAS!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='M' and tempSlot1[2]=='C'){	//MonkeyCars Combo
			credits += 20;
			TotalPointsWon += 20;
			std::cout<<"YOU WON A MONKEYS AND CARS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='B' and tempSlot1[2]=='B'){	//BananaBanana Combo
			credits += 20;
			TotalPointsWon += 20;
			std::cout<<"YOU WON 2 BANANAS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='B' and tempSlot1[2]=='C'){	//BananaCars Combo
			credits += 25;
			TotalPointsWon += 25;
			std::cout<<"YOU WON BANANA AND CARS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[0]=='C' and tempSlot1[2]=='C'){	//Double Cars Combo
			credits += 30;
			TotalPointsWon += 30;
			std::cout<<"YOU WON A DOUBLE CARS COMBO!!!!"<<std::endl;
		}
		
	}
	else if((tempSlot1[0]==tempSlot2[0] and tempSlot2[0]==tempSlot3[0]) and (tempSlot1[2]==tempSlot2[2] and tempSlot2[2]==tempSlot3[2])){
		//Double Winning Pattern 6 Horizontal Middle and Horizontal Bottom
		if(tempSlot1[1]=='S' and tempSlot1[2]=='S'){		//SevenSeven Combo														
			credits += 200;
			TotalPointsWon += 200;
			cout<<"YOU WON A 2 COMBO 777!!!!"<<endl;
		}
		else if(tempSlot1[1]=='S' and tempSlot1[2]=='M'){	//SevenMonkey Combo
			credits += 105;
			TotalPointsWon += 105;
			std::cout<<"COMBO SEVEN'S AND MONKEYS!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='S' and tempSlot1[2]=='B'){	//SevenBanana Combo
			credits += 110;
			TotalPointsWon += 110;
			std::cout<<"COMBO SEVEN'S AND BANANAS!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='S' and tempSlot1[2]=='C'){	//SevenCars Combo
			credits += 115;
			TotalPointsWon += 115;
			std::cout<<"COMBO SEVEN'S AND CARS!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='M' and tempSlot1[2]=='M'){	//MonkeyMonkey Combo
			credits += 10;
			TotalPointsWon += 10;
			std::cout<<"YOU WON A 2 COMBO MONKEYS!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='M' and tempSlot1[2]=='B'){	//MonkeyBanana Special Combo
			credits += 50;
			TotalPointsWon += 50;
			std::cout<<"YOU WON A SPECIAL COMBO MONKEYS AND BANANAS!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='M' and tempSlot1[2]=='C'){	//MonkeyCars Combo
			credits += 20;
			TotalPointsWon += 20;
			std::cout<<"YOU WON A MONKEYS AND CARS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='B' and tempSlot1[2]=='B'){	//BananaBanana Combo
			credits += 20;
			TotalPointsWon += 20;
			std::cout<<"YOU WON 2 BANANAS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='B' and tempSlot1[2]=='C'){	//BananaCars Combo
			credits += 25;
			TotalPointsWon += 25;
			std::cout<<"YOU WON BANANA AND CARS COMBO!!!!"<<std::endl;
		}
		else if(tempSlot1[1]=='C' and tempSlot1[2]=='C'){	//Double Cars Combo
			credits += 30;
			TotalPointsWon += 30;
			std::cout<<"YOU WON A DOUBLE CARS COMBO!!!!"<<std::endl;
		}
		
	}
	else if(tempSlot1[0]==tempSlot2[0] and tempSlot2[0]==tempSlot3[0]){		//Winning Pattern 1 Horizontal top ex. S-S-S

		switch(tempSlot1[0]){
			case 'S':
				credits += 100;
				TotalPointsWon += 100;
				std::cout<<"JACKPOT 777!!!"<<std::endl;
				break;
			case 'M':
				credits	+= 5;
				TotalPointsWon += 5;
				std::cout<<"YOU WON A MONKEY MMM!!!!"<<std::endl;
				break;
			case 'B':
				credits += 10;
				TotalPointsWon += 10;
				std::cout<<"YOU WON A BANANA BBB!!!!"<<std::endl;
				break;
			case 'C':
				credits += 15;
				TotalPointsWon += 15;
				std::cout<<"CARS!"<<std::endl;
				break;	
		}
	}
	else if(tempSlot1[1]==tempSlot2[1] and tempSlot2[1]==tempSlot3[1]){  //Winning Pattern no. 2 Horizontal Middle 
		
		switch(tempSlot1[1]){
			case 'S':
				credits += 100;
				TotalPointsWon += 100;
				std::cout<<"MUCH LUCK JACKPOT 777!!!!!"<<endl;
				Beep(300, 500);
				Beep(400, 600);
				Beep(500, 700);
				Beep(200, 500);
				break;
			case 'M':
				credits	+= 5;
				TotalPointsWon += 5;
				std::cout<<"YOU WON A  MONKEY COMBO!!!"<<std::endl;
				break;
			case 'B':
				credits += 10;
				TotalPointsWon += 10;
				std::cout<<"YOU WON A BANANA COMBO!!!"<<std::endl;
				break;
			case 'C':
				credits += 15;
				TotalPointsWon += 15;
				std::cout<<"YOU WON A CARS COMBO!!!"<<std::endl;
				break;	
		}
	}
	else if(tempSlot1[2]==tempSlot2[2] and tempSlot2[2]==tempSlot3[2]){ //Winning Pattern no. 3 Horizontal Bottom
		
		switch(tempSlot1[2]){
			case 'S':
				credits += 100;
				TotalPointsWon += 100;
				std::cout<<"MUCH LUCK JACKPOT 777!!!!!"<<endl;
				Beep(300, 500);
				Beep(400, 600);
				Beep(500, 700);
				Beep(200, 500);
				break;
			case 'M':
				credits	+= 5;
				TotalPointsWon += 5;
				std::cout<<"YOU WON A  MONKEY COMBO!!!"<<std::endl;
				break;
			case 'B':
				credits += 10;
				TotalPointsWon += 10;
				std::cout<<"YOU WON A BANANA COMBO!!!"<<std::endl;
				break;
			case 'C':
				credits += 15;
				TotalPointsWon += 15;
				std::cout<<"YOU WON A CARS COMBO!!!"<<std::endl;
				break;	
		}
	}
	else if(tempSlot1[0]==tempSlot2[1] and tempSlot2[1]==tempSlot3[2]){		//Winning Pattern no. 4 Slanting from Top to Bottom
		
		switch(tempSlot1[0]){
			case 'S':
				credits += 100;
				TotalPointsWon += 100;
				std::cout<<"MUCH LUCK JACKPOT 777!!!!!"<<endl;
				Beep(300, 500);
				Beep(400, 600);
				Beep(500, 700);
				Beep(200, 500);
				break;
			case 'M':
				credits	+= 5;
				TotalPointsWon += 5;
				std::cout<<"YOU WON A  MONKEY COMBO!!!"<<std::endl;
				break;
			case 'B':
				credits += 10;
				TotalPointsWon += 10;
				std::cout<<"YOU WON A BANANA COMBO!!!"<<std::endl;
				break;
			case 'C':
				credits += 15;
				TotalPointsWon += 15;
				std::cout<<"YOU WON A CARS COMBO!!!"<<std::endl;
				break;	
		}
		
	}
	else if(tempSlot1[2]==tempSlot2[1] and tempSlot2[1]==tempSlot3[0]){		//Winning Pattern no. 5 Slanting from Bottom to Top
		
		switch(tempSlot1[2]){
			case 'S':
				credits += 100;
				TotalPointsWon += 100;
				std::cout<<"MUCH LUCK JACKPOT 777!!!!!"<<endl;
				Beep(300, 500);
				Beep(400, 600);
				Beep(500, 700);
				Beep(200, 500);
				break;
			case 'M':
				credits	+= 5;
				TotalPointsWon += 5;
				std::cout<<"YOU WON A  MONKEY COMBO!!!"<<std::endl;
				break;
			case 'B':
				credits += 10;
				TotalPointsWon += 10;
				std::cout<<"YOU WON A BANANA COMBO!!!"<<std::endl;
				break;
			case 'C':
				credits += 15;
				TotalPointsWon += 15;
				std::cout<<"YOU WON A CARS COMBO!!!"<<std::endl;
				break;	
		}
	}
	else{
		std::cout<<"NO HIT!!! TRY AGAIN"<<std::endl;
		return false;
	}
}

void DelayFunction(double tempSecondsToDelay){ //Delaying Function
	clock_t startTime = clock(); //Start timer
 	double secondsPassed;
 	double secondsToDelay = tempSecondsToDelay;
 	//std::cout << "Time to delay: " << secondsToDelay << std::endl;
 	bool flag = true;
  	while(flag)
  	{
   		secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
   		if(secondsPassed >= secondsToDelay)
    {
     //std::cout << secondsPassed << " seconds have passed" << std::endl;
     flag = false;
    }
  }
}

void Reel(char SelectedSlot[], char Selections[]){   //REELING FUNCTION, IF THE USER PRESSED A KEY THE REEL WILL STOP
	int count = 0;
	int SlotNum = 0;
	
	cout<<"REEEEEEEEEEEEEELLLLLIIIIIIIIING!!"<<endl;
	cout<<"PRESS SPACE TO STOP!!"<<endl;
	
while(!kbhit()){ //KEY HITTING FUNCTION 
	while(!kbhit()){
		while(count<3){
			SelectedSlot[count] = Selections[SlotNum];
			count += 1;
			
			if(SlotNum + 1 == 7){
				
				SlotNum = 0;
			}
			
			else{
				SlotNum += 1;
			}
		}
		count = 0;		
	}
	SlotNum = 0;

}
	for(int i=0;i<3;i++){
		cout<<"|"<<SelectedSlot[i]<<"|"<<endl;
	}
	
	while(kbhit()){
		getch();
	}
}



int play(){
	srand(time(0));
	*credits_ptr = 5;
	int tokens = 0;
	int CoinInserted = 0;
	int enter = 0;
	int TotalPointsWon = 0;
	bool exit = false;
	bool key = false;
	
	
	bool check = false;
	int count = 0;
	int SlotNum = 0;
	int counter = 0;
	int seal = 0;
	
	char selection1[] = {'S', 'M', 'B', 'B', 'S', 'M', 'C'};
	char selection2[] = {'S', 'M', 'B', 'C', 'B', 'S', 'M'};
	char selection3[] = {'S', 'C', 'M', 'B', 'B', 'S', 'M'};

	char slot1 [3] = {'S','M','B'};
	char slot2 [3] = {'S','M','B'};
	char slot3 [3] = {'S','M','B'};
	char temp [] = {'Q'};
	
	char *testSlot1 = nullptr;
	char *testSlot2 = nullptr;
	char *testSlot3 = nullptr;
	
	testSlot1 = new char[3]; //{'S', 'M', 'B'};
	testSlot2 = new char[3]; //{'S', 'S', 'C'};
	testSlot3 = new char[3]; //{'S', 'M', 'S'};
	
	testSlot1[0] = 'B';
	testSlot1[1] = 'M';
	testSlot1[2] = 'B';
	
	testSlot2[0] = 'B';
	testSlot2[1] = 'S';
	testSlot2[2] = 'B';
	
	testSlot3[0] = 'B';
	testSlot3[1] = 'M';
	testSlot3[2] = 'B';
	
	//for(int i=0; i<=5; i++){
	//	cout<<1 +(rand() % 6)<<endl;
	//}
	while(exit == false){
	cout<<"WELCOME TO MY SLOT MACHINE"<<endl;
	cout<<"|"<<slot1[0]<<"|"<<slot2[0]<<"|"<<slot3[0]<<"|"<<endl;
	cout<<"|"<<slot1[1]<<"|"<<slot2[1]<<"|"<<slot3[1]<<"|"<<endl;
	cout<<"|"<<slot1[2]<<"|"<<slot2[2]<<"|"<<slot3[2]<<"|"<<endl;
	
	
	cout<<endl<<"Please insert 1-3 coins"<<endl;
	std::cout<<"Credits: "<<*credits_ptr<<std::endl<<std::endl;
	
	cin>>tokens;
	while((!cin or tokens == 0) or tokens >= 4){
		std::cout<<"Invalid Entry!! Only insert 1-3 Coins!!"<<std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin>>tokens;
		
	}
	if(tokens > credits){
		while(tokens > credits){
			
			std::cout<<"not enough credits!!!"<<std::endl;
			std::cout<<"Credits: "<<credits<<std::endl;
			std::cout<<"Please Insert Coins."<<std::endl;
			cin>>tokens;	
		}	
	}
	else if(credits>tokens){
			CoinInserted = tokens;
	}
		
		
	
	while(tokens > credits){
		
		if(credits < tokens){
		std::cout<<"not enough credits!!!"<<std::endl;
		std::cout<<"Credits: "<<credits<<std::endl;
		std::cout<<"Please Insert Coins."<<std::endl;
		cin>>tokens;	
		}
		else if(credits>tokens){
			switch(tokens){
			case(1):
				CoinInserted = 1;
				break;
			case(2):
				CoinInserted = 2;
				break;
			case(3):
				CoinInserted = 3;
				break;		
			}
		}	
	}
	
	
	
	

	
	Reel(slot1, selection1);
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	DelayFunction(1);
	Beep(300,100);
	Beep(100,100);
	Reel(slot2, selection2);
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	DelayFunction(1);
	Beep(300,100);
	Beep(100,100);
	Reel(slot3, selection3);
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	DelayFunction(1);
	Beep(300,100);
	Beep(100,100);
	DelayFunction(1);
	system("cls");
	

	//Reel(slot3, selection3);
	
	cout<<"|"<<slot1[0]<<"|"<<slot2[0]<<"|"<<slot3[0]<<"|"<<endl;
	cout<<"|"<<slot1[1]<<"|"<<slot2[1]<<"|"<<slot3[1]<<"|"<<endl;
	cout<<"|"<<slot1[2]<<"|"<<slot2[2]<<"|"<<slot3[2]<<"|"<<endl;
	Beep(100,300);
	Beep(150,200);
	Beep(200,200);
	Beep(250,300);
	GetResult(slot1, slot2, slot3);
	/*
	showSlotState(testSlot1, testSlot2, testSlot3);
	if(GetResult(testSlot1, testSlot2, testSlot3)==true){ 	//slot1, slot2, slot3
		DelayFunction(2);
	} */
	DelayFunction(5);
	system("cls");
	
	
}
	return 0;
	delete[] testSlot1;
	delete[] testSlot2;
	delete[] testSlot3;
	
}
  
int main(){
	
	play();
	
	bool key = false;
	bool check = false;
	//int count = 0;
	//int SlotNum = 0;
	//int counter = 0;
	//int seal = 0;

	char slot1[] = {'s', 'm', 'b'};
	char selection1[] = {'S', 'M', 'B', 'B', 'S', 'M', 'C'};
	
/*	
while(check == false){
	while(counter<7){
		while(count<3){
			slot1[count] = selection1[SlotNum];
			count += 1;
			
			if(SlotNum + 1 == 7){
				
				SlotNum = 0;
			}
			
			else{
				SlotNum += 1;
			}
		
		}
		count = 0;	
		cout<<slot1<<endl;
		
		
		*credits_ptr -= coinInserted;
	}
	cin>>seal;
	SlotNum = 0;
	cout<<"Hello"<<endl;
}
	*/
	
	/* Truly Random
	/*				
	srand(time(0));
	char temp1[1] = {'s'}; 
	char* temp_pointer = temp1;
	cout<<temp_pointer[0]<<endl;
	
	char select[3] = {'d', 't', 'a'};
	char* pt = select;
	
	
	char slot1[3] = {'s', 'a', 'd'};
	char* slot_pointer = slot1;
	cout<<slot_pointer<<endl;
	
	temp1[0] = select[rand() % 3];
	cout<<temp1[0]<<endl;
	*/
	

	//cout<<pt<<endl;
	//cout<<temp_pointer<<endl;
	//cout<<slot_pointer<<endl;
	//cout<<slot1[0]<<endl;
	
	
}

