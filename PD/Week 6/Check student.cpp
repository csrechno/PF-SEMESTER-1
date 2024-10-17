#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

 main() {
    int examHour, examMinute, studentHour, studentMinute;

    
    cout << "Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Student hour of arrival: ";
    cin >> studentHour;
    cout << "Student minutes of arrival: ";
    cin >> studentMinute;

    string result = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << result << endl;

   
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) {
    
    int examTime = examHour * 60 + examMinute;
    int studentTime = studentHour * 60 + studentMinute;

    int timeDifference = studentTime - examTime;

    if (timeDifference < -30) {
        int absDiff = -timeDifference;
        if (absDiff >= 60) {
            int hours = absDiff / 60;
            int minutes = absDiff % 60;
            return to_string(hours) + ":" + (minutes < 10 ? "0" : "") + to_string(minutes) + " hours before the start";
        } else {
            return to_string(absDiff) + " minutes before the start";
        }
    } else if (timeDifference <= 0) {
        
        if (timeDifference == 0) {
            return "On time";
        } else {
            int absDiff = -timeDifference; 
            if (absDiff >= 60) {
                int hours = absDiff / 60;
                int minutes = absDiff % 60;
                return "Late\n" + to_string(hours) + ":" + (minutes < 10 ? "0" : "") + to_string(minutes) + " hours after the start";
            } else {
                return "Late\n" + to_string(absDiff) + " minutes after the start";
            }
        }
    } else {
        
        int absDiff = timeDifference;
        if (absDiff >= 60) {
            int hours = absDiff / 60;
            int minutes = absDiff % 60;
            return "Early\n" + to_string(hours) + ":" + (minutes < 10 ? "0" : "") + to_string(minutes) + " hours before the start";
        } else {
            return "On time\n" + to_string(absDiff) + " minutes before the start";
        }
    }
}

