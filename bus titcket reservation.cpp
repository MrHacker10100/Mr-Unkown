#include<iostream>
#include<string>
using namespace std;
//forward declaration
class reciept;

// class getting detail from user
class cust_name{
    public : 
    string cus_name;
    double phone_no;
    int city_sel;
    int city_dec;
    int ticket_bill;
    string dest_booked;
    //friend function declaration
    friend class reciept;

    void get_detail(){
        cout<<"         SHADOW BUS STATION \n";
        cout<<"---------------WELCOME---------------\n";
        cout<<"Enter your name: ";
        getline(cin,cus_name);
        cout<<"\nEnter Your Phone Number:";
        cin>>phone_no;
        cin.ignore(); 
    }   

};

class station : public cust_name{
    public :
    void dest_sel(){
        cout<<"-----------------------------------------------------\n";
        cout<<"Press 1 for Faisalabad to Lahore\nPress 2 for Faisalabad to Islamabad\nPress 3 for Faisalabad to Multan\nPress 4 for Faisalabad to Sargodha\nPress 5 for Faisalabad to Karachi";
            cin>>city_sel;
            cout<<"-----------------------------------------------------\n";
        if(city_sel==1){
            
            cout<<" You have selected Faisalabad to Lahore\n ";
            cout<<"Faisalabad to Lahore Drive Almost :  183 km\n";
            cout<<" Total Time Taken is               :  2 hours and 9 minutes\n";
            cout<<"-----------------------------------------------------\n";
            cout<<"Press 1 for Economy Ticket : 700 RS\nPress 2 For Bussiness class Ticket : 900\n";
            cin>>city_dec;
            dest_booked="Faisalabad to Lahore";
            cout<<"-----------------------------------------------------\n";
            if(city_dec==1){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Economy CLass ticket has been booked successfully.\n";
                cout<<"Bus Will be ready to go around 5 Am\n";
                ticket_bill=700;
        
                
            }
            else if(city_dec==2 ){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Bussiness Class ticket has been booked Successfully.\n";
                cout<<"Bus will be ready at 6 am \n";
                ticket_bill=900;
                
            
            }
        } 
        else if(city_sel==2){
            cout<<" You have selected Faisalabad to Islamabad\n ";
            cout<<"Faisalabad to Lahore Drive Almost : 320 km\n";
            cout<<" Total Time Taken is               : 3 hours and 45 minutes\n";
            cout<<"Press 1 for Economy Ticket : 1500 RS\nPress 2 For Bussiness class Ticket : 2000\n";
            cin>>city_dec;
            dest_booked="Faisalabad to Islamabad";
            cout<<"-----------------------------------------------------\n";
            if(city_dec==1){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Economy CLass ticket has been booked successfully.\n";
                cout<<"Bus Will be ready to go around 5 Am\n";
                ticket_bill=1500;
            }
            else if(city_dec==2 ){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Bussiness Class ticket has been booked Successfully.";
                cout<<"Bus will be ready at 6 am \n";
                ticket_bill=2000;
            
            }
        } 
         else if(city_sel==3){
            cout<<" You have selected Faisalabad to Multan\n ";
            cout<<"Faisalabad to Lahore Drive Almost : 245 km\n";
            cout<<" Total Time Taken is               : 3 hours and 05 minutes\n";
            cout<<"Press 1 for Economy Ticket : 1300 RS\nPress 2 For Bussiness class Ticket : 1700\n";
            cin>>city_dec;
            dest_booked="Faisalabad to Multan";
            cout<<"-----------------------------------------------------\n";
            if(city_dec==1){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Economy CLass ticket has been booked successfully.\n";
                cout<<"Bus Will be ready to go around 5 Am\n";
                ticket_bill=1300;
            }
            else if(city_dec==2 ){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Bussiness Class ticket has been booked Successfully.";
                cout<<"Bus will be ready at 6 am \n";
                ticket_bill=1700;
            
            }
        }
         else if(city_sel==4){
            cout<<" You have selected Faisalabad to Sargodha\n ";
            cout<<"Faisalabad to Lahore Drive Almost : 130 km\n";
            cout<<" Total Time Taken is               : 2 hours and 10 minutes\n";
            cout<<"Press 1 for Economy Ticket : 600 RS\nPress 2 For Bussiness class Ticket : 900\n";
            cin>>city_dec;
            dest_booked="Faisalabad to Sargodha";
            cout<<"-----------------------------------------------------\n";
            if(city_dec==1){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Economy CLass ticket has been booked successfully.\n";
                cout<<"Bus Will be ready to go around 5 Am\n";
                ticket_bill=600;
            }
            else if(city_dec==2 ){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Bussiness Class ticket has been booked Successfully.\n";
                cout<<"Bus will be ready at 6 am \n";
                ticket_bill=900;
            
            }
        } 

         else if(city_sel==5){
            cout<<" You have selected Faisalabad to Karachi\n ";
            cout<<"Faisalabad to Lahore Drive Almost : 1113 km\n";
            cout<<" Total Time Taken is               : 13 hours and 40 minutes\n";
            cout<<"Press 1 for Economy Ticket : 3500 RS\nPress 2 For Bussiness class Ticket : 5000\n";
            cin>>city_dec;
            dest_booked="Faisalabad to Karachi";
            cout<<"-----------------------------------------------------\n";
            if(city_dec==1){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Economy CLass ticket has been booked successfully.\n";
                cout<<"Bus Will be ready to go around 5 Am\n";
                ticket_bill=3500;
            }
            else if(city_dec==2 ){
                cout<<"-----------------------------------------------------\n";
                cout<<"Your Bussiness Class ticket has been booked Successfully.\n";
                cout<<"Bus will be ready at 6 am \n";
                ticket_bill=5000;
            
            }
        }  
        else 
        cout<<"Wrong Selection";
    
    //function
    }

};



class reciept{

	public:
        string name_status;
        int ticket_pay;
        string booked_des;
        double phone_rec;

    void get_detail(cust_name c,station s){
		name_status = c.cus_name;
        ticket_pay = s.ticket_bill;
        booked_des =s.dest_booked;
        phone_rec =c.phone_no;
		

	
	}	
	void Display_detail(){
		//-----------------------------------------------Reciept---------------------------------
        int payment_return;
		cout<<"---------------------------------------\n";
		cout<<"Total : "<<ticket_pay<<endl;
		if(ticket_pay!=0){
		cout<<"Enter Amount : ";
		cin>>payment_return;
		}
		cout<<"---------------------------------------\n";
		cout<<"-----------------Receipt---------------\n";
		cout<<"Customer Name : "<<name_status<<endl;
		cout<<"Phone Number  : "<<phone_rec<<endl;
		cout<<"Destination   : "<<booked_des<<endl;
		cout<<"Return        : "<<payment_return<<endl;
		cout<<"-------------------------------------------\n";
		cout<<"-------------------------------------------\n";
    	cout<<"--Thank You For Savouring moments with us--\n"
	        <<"-----------------Best Wishes---------------\n";
	    cout<<"-------------------------------------------\n";
	}

};



int main(){
    for(int i=0;i<2;i){
	cust_name c1;
    station n1;
    c1.get_detail();
    n1.dest_sel();
    reciept r1;
    r1.get_detail(c1,n1);
    r1.Display_detail();
    }
    return 0;
}