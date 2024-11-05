#include <iostream>
using namespace std;
int calculateTotalTime(int readingTime,int writingTime);
void roastFeedback(int daily_total_time);
void weeklySummary(int weekly_total);

int main(){
	int readingTime,writingTime,daily_total_time;
	int dailyTime[7];
	cout << "Enter Reading and Writing time for 7 days:" << endl;
	for (int i=0; i<7; i++){
		cout << "Enter Your Reading Time: ";
		cin >> readingTime;
		cout << "Enter Your Writing Time: ";
		cin >> writingTime;
		daily_total_time = calculateTotalTime(readingTime,writingTime);
		for (int i=0; i<7; i++){
			dailyTime[i] = daily_total_time;
		}
		roastFeedback(daily_total_time);
    }
    int weekly_total = 0;
    for (int i=0; i<7; i++){
    	weekly_total += dailyTime[i];
	}
	weeklySummary(weekly_total);
	return 0;
}
int calculateTotalTime(int readingTime,int writingTime){
	int daily_total_time = readingTime + writingTime;
	return daily_total_time;
}
void roastFeedback(int daily_total_time){
	if (daily_total_time > 120){
		cout << "daily_total_time = " << daily_total_time << endl;
		cout << "Oh bhai, 2 ghante confessions mein laga diye Kya NASA mein job lagne wali hai is se Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai" << endl;
	}
	else if (daily_total_time >= 60 && daily_total_time <= 120){
		cout << "daily_total_time = " << daily_total_time << endl;
		cout << "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao." << endl;
	}
	else if (daily_total_time < 60){
		cout << "daily_total_time = " << daily_total_time << endl;
		cout << "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!" << endl;
	}
	else{
		cout << "Invalid Option" << endl;
	}
}
void weeklySummary(int weekly_total){
	if (weekly_total > 600){
		cout << "weekly_total = " << weekly_total << endl;
		cout << "Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!" << endl;
	}
	else if (weekly_total < 600){
		cout << "weekly_total = " << weekly_total << endl;
		cout << "Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!" << endl;
	}
	else{
		cout << "Invalid Option" << endl;
	}
}