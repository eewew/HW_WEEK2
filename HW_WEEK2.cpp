// HW_WEEK2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
   cout << "\n\tTask 1\n\n";
   float time;
   cout << "Enter time in seconds:"; cin >> time;
   float minutes=time/60;
   cout << time << " seconds in minutes is " << minutes<< " minutes.\n";
   float hours=minutes/60;
   cout << time << " seconds in hours is " << hours << " hours.\n";
   cout << "\n\tTask 2\n\n";
   float num;
   cout << "Enter your number:"; cin >> num;
   int hrn = num;
   float kop = (num - hrn)*100;
   cout << hrn << " hrn " << kop << " kop.\n";
   cout << "\n\tTask 3\n\n";
   double S, t;
   double min, sec, result;
   double speed = 0;
   cout << "Enter distance(meters):"; cin >> S;
   cout << "Enter time(minutes.seconds:)"; cin >> t;
   min = (int)t;
   sec = (t - min) * 100;
   result = min * 60 + sec;
   cout << "Distance: " << S << " meters\n";
   cout << "Time: " << result << " sec.";
   speed = (S / 1000) / (result / 3600);
   cout << "\nYou ran with pace of " << speed << "km. per hour \n";
   cout << "\n\tTask 4\n\n";
   int user_days;
   cout << "Enter how many days:"; cin >> user_days;
   const int days_in_week = 7;
   int weeks = user_days / days_in_week;
   cout << weeks << " weeks and ";
   int days;
   days = user_days % days_in_week;
   cout << days << " days\n\n";
   return 0;
}
