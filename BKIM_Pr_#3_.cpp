//The Gross Income Calculator of Blue Mont Hotel


#include <iostream>
#include <string>
using namespace std;
int main()
{
 string location;
    //There are 4 types of rooms with different prices per a night
   const int SINGLE_ROOM_RATE=60,
             DOUBLE_ROOM_RATE=75,
             KING_ROOM_RATE=100,
             SUITE_ROOM_RATE=150;
    // Suppose there are 5th floor with 30 rooms at the hotel.
    const int FLOOR_MAX=5,FLOOR_MIX=1,ROOM_MAX=30,ROOM_MIN=1;
    // Set the initialiezed values of the numbers of rooms and occupied rates.
    int rooms=0;
    int totalOfOccRooms=0;
    int totalOfUnoccRooms=0;
    int floor=0;
    int singleRoom=0;
    int doubleRoom=0;
    int kingRoom=0;
    int suiteRoom=0;
    int i=0;
    double occupiedRate=0;
    int totalSingleRoom=0;
    int totalDoubleRoom=0;
    int totalKingRoom=0;
    int totalSuiteRoom=0;
    int totalRooms=0;
    cout<<"Which location:"<<endl;
    getline(cin,location);
    
    cout<<"Whcih floor(1-5):"<<endl;
    cin>>floor;
    //If the floor is over the maximum value or less than the minimum value, it repeats the question.

   while(floor>FLOOR_MAX||floor<FLOOR_MIX)
          {cout<<"Invalid input.Please try it agian!!"<<endl;
          cout<<"Whcih floor(1-5):"<<endl;
          cin>>floor;}
   
    //Keep adding the numbers of rooms to find the total number of rooms.
   for(i=1;i<=floor;i++)
    
                    {do{cout<<"Enter total rooms of the "<<i<<"th floor.(1-30):"<<endl;
                     cin>>rooms;
                     
                        while(rooms>ROOM_MAX)
                        {cout<<"Invalid input.Please try it agian!!"<<endl;
                           cout<<"Enter total rooms of the"<<i<< "th floor."<<endl;
                           cin>>rooms;
                          }
                         
                         cout<<"Enter total single rooms of the"<<i<<"th floor."<<endl;
                         cin>>singleRoom;
                         
                         cout<<"Enter total double rooms of the"<<i<<"th floor."<<endl;
                         cin>>doubleRoom;
                         
                         cout<<"Enter total king rooms of the"<<i<<"th floor."<<endl;
                         cin>>kingRoom;
                         
                         cout<<"Enter total suite rooms of the"<<i<<"th floor."<<endl;
                         cin>>suiteRoom;
                        totalOfOccRooms=singleRoom+doubleRoom+kingRoom+suiteRoom;
                        if(totalOfOccRooms>rooms)
                        {cout<<"Invalid data!!Please check if the total rooms and occupied rooms are matched!";}
                        
                    }while(totalOfOccRooms>rooms);
    //Define the values which can be the results of the total numer of rooms each.
    totalSingleRoom+=singleRoom;
    totalDoubleRoom+=doubleRoom;
    totalKingRoom+=kingRoom;
    totalSuiteRoom+=suiteRoom;
    totalOfOccRooms+=totalSingleRoom+totalDoubleRoom+totalKingRoom+totalSuiteRoom;}
    totalRooms+=rooms;
    for(int k=0;k<50;k++)
       {cout<<"=";}
        cout<<endl;
        cout<<"\t\tBlue Hotel located in Washington"<<endl;
        cout<<"\t\t"<<"TODAY'S ROOM RATES<US$/night>"<<endl;
        cout<<"SingleRoom"<<"\t\DoubleRoom"<<"\tKingRoom"<<"\tSuiteRoom"<<endl;
        cout<<totalSingleRoom<<"\t\t\t\t"<<totalDoubleRoom<<"\t\t\t\t"<<totalKingRoom<<"\t\t\t\t"<<totalSuiteRoom<<endl;
    for(int k=0;k<50;k++)
        {cout<<"=";}
           cout<<endl;
    //find total income and occupancy rate
    double hotelIncome=(totalSingleRoom*SINGLE_ROOM_RATE)+(totalDoubleRoom*DOUBLE_ROOM_RATE)+(totalKingRoom*KING_ROOM_RATE)+(totalSuiteRoom*SUITE_ROOM_RATE);
     cout<<"\t\t"<<"Hotel Income: "<<hotelIncome<<endl;
     cout<<"\t total of Rooms: "<<totalRooms<<endl;
     totalOfOccRooms=singleRoom+doubleRoom+kingRoom+suiteRoom;
     cout<<"Total of occupied rooms: "<<totalOfOccRooms<<endl;
     totalOfUnoccRooms=totalRooms-totalOfOccRooms;
     cout<<"total of unoccupied rooms: "<<totalOfUnoccRooms<<endl;
     occupiedRate=((double)totalOfOccRooms/(double)totalRooms);
     cout<<"\t\tOccupancy rate:"<<"\t\t"<<occupiedRate<<endl;
    
return 0;
    
}

