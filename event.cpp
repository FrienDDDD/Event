#include <iostream>
#include<cstdlib>
#include<vector>
#include<fstream>
using namespace std;

vector<string> Events ;

void ShowEvent(){

    cout << "---------------------Events---------------------" << endl ;
    for(int i = 0;i < Events.size(); i++){
        cout << "[" << Events[i] << "]"  << " "   ;
    }
    cout << endl ;
    cout << "------------------------------------------------" << endl ;
    

}

void deleteEvent(string event){

    string n  ;
    int count = 0 ;
    for(int i = 0;i < Events.size(); i++){
        if(Events[i] != event){
            count ++ ;
        }    
    }  
    
    for(int i = 0;i < Events.size(); i++){
        if(Events[i] == event){
            Events.erase(Events.begin()+i) ;
            count += 1 ;
        }
    }  
    
    if(count == Events.size() ){
        cout << "-------Not found-------" << endl ;
        cout << "   Please try again    " << endl ;
        n = "Not found" ;
    }
    
    if(n != "Not found" ){
        ShowEvent() ;
        n = "Found" ;
    }
    
   
}

void editEvent(string a){

    
    int count = 0 ;
    string v ,n ;
    for(int i = 0;i < Events.size(); i++){
        if(Events[i] == a){
            cout << "You want to edit " << "[" << a << "]" << " event to: "    ;  
            cin >> v ;
        }
    }
   
    for(int i = 0;i < Events.size(); i++){
        if(Events[i] != a){
            count ++ ;
        }    
    }  
    
    for(int i = 0;i < Events.size(); i++){
        if(Events[i] == a){
            Events.erase(Events.begin()+i) ;
            Events.insert(Events.begin()+i,v) ;
        }
    }  
    
    if(count == Events.size() ){
        cout << "-------Not found-------" << endl ;
        cout << "   Please try again    " << endl ;
        n = "Not found" ;
    }
    
    if(n != "Not found" ){
        ShowEvent() ;
        n = "Found" ;
    }
    
   
}

void voteEvent(string z){

    


}

int main()
{
    
    
    string event,x,y,z ;
    int number ;
    
    cout << "  Please input an event you want to do " << endl ;
    cout << "|      Press 1 for add event         |" << endl ;
    cout << "|      Press 2 for delete event      |" << endl ;
    cout << "|      Press 3 for edit event        |"  << endl ;
    cout << "|      Press 4 for vote event        |" << endl ;
    cout << "|      Press 5 for exit              |" << endl ;
    cout << "|------------------------------------|" << endl ;
    cout << endl ;
    do{
        
        cout << "Choose numbers: " ;
        cin >> number ;

        switch(number){
            case 1:
                cout << "input your event you want to do: " ;
                cin >> event ;
                Events.push_back(event) ;
                ShowEvent() ;
                break ;
            case 2:
                ShowEvent() ;
                cout << "Choose an event you want to delete: " ;
                cin >> x ;
                deleteEvent(x) ;
                break ;
            case 3:
                ShowEvent() ;
                cout << "Choose an event you want to edit: "  ;
                cin >> y ;
                editEvent(y) ;
                break ;
            case 4:
                cout << "Choose an event you want to vote: " ;
                cin >> z ;
                voteEvent(z) ;
                break ;
            case 5:
                break ;
            default:
                cout << "Please choose number between 1-5: " << endl ;
        }
    }
    while(number != 5) ;
    
    

    return 0;
}
