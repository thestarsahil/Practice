/*
Jaise hi tum ek room book karte ho, ek receptionist (constructor) tumhara naam, room number, aur default AC settings set kar deta hai.

Tumhe manual setup karne ki zaroorat nahi hoti (yeh automatic hota hai).
*/
#include<iostream>
using namespace std;

class HotelRoom{
private:
int roomNumber;
string GuestName;
int AC;

public:
HotelRoom(){
    roomNumber = 3024;
    GuestName = "Guest";
    AC = 1;
    cout<<"Welcome ! Default Room If Not Specific Room Available"<<endl;
}
void getDetails() {
    cout<<"Guest Name: "<< GuestName <<endl;
    cout<<"Room Number: "<< roomNumber<<endl;
    cout<<"AC Avaiable: "<< AC<<endl;

} 

};

int main(){
    HotelRoom h1;
    h1.getDetails();

}