#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
 using namespace std;
  int reverseNumber(int num);
  int dayValueFromNumber(int day); 
  int condition;  
  int day;
  int dayValueFromDate(int month, int date, int year);
  bool PrimeNumberCheck(int num);
  string DayOfWeek;
  string monthNames;
  int num;
  bool restart;
  int month;
  int date;
  int year;
  int binaryNum;
  int divide;
  int revNum;
  void makeCalender(int year); 
  int Binary(int num);
  int main(int argc, char** argv)
  {
    restart = false; 
    int date;
    int year;
    int month;
    int num;
    int choiceNum;
    do{
  
    cout <<"Welcome to the number tool!" << endl;
    cout <<"Menu:" << endl;
    cout <<"1 - Prime Number Checker" << endl;
    cout <<"2 - Convert a Number to binary" << endl;
    cout <<"3 - Compute the reverse of a Number" << endl;
    cout <<"4 - Find the Day - Zeller's Rule"<<  endl;
    cout <<"Choose an option: " << endl;
    cin >> choiceNum;
    
    if(choiceNum == 1){
      cout << "Enter a number" << endl;
      cin >> num;
     
      if(PrimeNumberCheck(num) == 0)
	{
	  cout << num << " is prime" << endl;
	       }else {
	             cout << num << " is not prime" << endl;
           }

      cout<< "Press 1 to restart" << endl;

      cin >> condition;

          if( condition == 1){

	    restart = true;

	  }else{
	    restart = false;
      }
    }  
    if(choiceNum == 2){
      cout << "Enter a number" << endl;
      cin >> num;
      cout << num << " in binary is " << Binary(num) << endl;
      cout << "Press 1 to restart" << endl;
      cin >> condition;
      if ( condition == 1){
	restart = true;
      }else{
	restart = false;
      }
    }  
    
    if(choiceNum == 3){
      cout << "Enter a number" << endl;
      cin >> num;
      cout << num << " reversed is: " << reverseNumber(num) << endl;
      cout << " press 1 to restart" << endl;
      cin >> condition;
	if(condition == 1){
	  restart = true;
	}else{
	  restart = false;
	}
    }
    if(choiceNum == 4) {
      cout << "Find the day of the week from any Gregorian calender date!" << endl;
      cout << "Enter the month: " << endl;
      cin  >> month;
      cout << "Enter the date: " << endl;
      cin  >> date;
      cout << "Enter the Year: " << endl;
      cin >> year;
      cout << "the day was: " << dayValueFromDate(month,date,year) << endl;
      cout << "Press 1 to restart" << endl;
      cin >> condition;
         if(condition ==1 ){
	   restart = true;
	    }else{
	   restart = false;
	 }
       }
    }
    while(restart == true); 
  }
  

  

bool PrimeNumberCheck(int num)
{
  if( num == 2){
    return 0; 
  }
  if( num == 1){
    return 1;
  }
  return (num % 2) == 0;
}


       int Binary (int num)
       {
          int i = 1; 
          binaryNum = 0;
            while( num != 0) {
         	divide = num%2;
		num /= 2;
		binaryNum += divide*i;
		i *= 10;
	      }
	    return binaryNum;
       }
int reverseNumber(int num){
  while( num != 0) {
   int remainder = num%10;
   revNum = revNum*10 + remainder;
   num /= 10; 
  }
   return revNum;
}
   


  
         int dayValueFromDate(int month, int date, int year){

	  
	   static int Numb[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
	   year -= month < 3;
	   return ( year + year/4 - year/100 + year/400 + Numb[month - 1] + date) %7;

	 }
      
int dayValueFromNumber(int day)
{
  
  if (dayValueFromDate(month,date,year) == 0){
    DayOfWeek = "Sunday"; 
}
  if(dayValueFromDate(month,date,year) == 1){
  DayOfWeek = "Monday";
}
  if (dayValueFromDate(month,date,year) == 2){
  DayOfWeek = "Tuesday";
}
  if(dayValueFromDate(month,date,year) == 3){
    DayOfWeek = "Wednesday"; 
}
  if(dayValueFromDate(month,date,year) == 4){
    DayOfWeek = "Thursday";
}
  if(dayValueFromDate(month,date,year) == 5) {
    DayOfWeek = "Friday"; 
}
  if(dayValueFromDate(month,date,year) == 6){
    DayOfWeek = "Saturday"; 
}
  return dayValueFromDate(month,date,year);
} 
                    string MonthName(int month){
		      string monthNames[] = { " January", "February", "March", "April", "May","June","July","August","September","October","November", "December"};
		      return (monthNames[month]);

		    }


int numDays ( int month, int year) {
  if(month == 0 ){ // January
    return (31);
  }
      if(month == 1) // February
	{
	  if(year% 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	    return (29); // dumb leapyear
	  else 
	    return(28);
	}
	 
      if(month == 2){ // March
	return (31);
      }
      if(month ==3){ // April 
	return (30);
      }
      if(month == 4){ // May
	return (31);
      }
      if(month == 5){ // June 
	return(30);
      }
      if(month == 6){ // July 
	return(31);
      }
      if(month == 7){ // August 
	return(31);
      }
      if(month == 8){ // September
	return (30);
      }
      if(month == 9){ // October
	return (31);
      }
      if(month == 10){ // November
	return (30);
      }
      if(month == 11){ // December
	return (31);
      }
      return 0;
}


	       
      

