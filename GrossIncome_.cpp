#include <iostream>
#include <string>
using namespace std;

int main() {
    // Prompt for hotel location
    string location;
    cout << "Enter the hotel location: ";
    getline(cin, location);

    // Room rates per night
    const int SINGLE_ROOM_RATE = 60,
              DOUBLE_ROOM_RATE = 75,
              KING_ROOM_RATE = 100,
              SUITE_ROOM_RATE = 150;

    // Maximum floor and room numbers
    const int FLOOR_MAX = 5, FLOOR_MIN = 1, ROOM_MAX = 30;

    // Variables to store room information
    int rooms, singleRoom, doubleRoom, kingRoom, suiteRoom;

    // Initialize total room counts
    int floor = 0, totalRooms = 0, totalSingleRoom = 0, totalDoubleRoom = 0, totalKingRoom = 0, totalSuiteRoom = 0;

    // Prompt for floor number
    cout << "Enter the floor number (1-5): ";
    cin >> floor;

    // Validate floor input
    while (floor > FLOOR_MAX || floor < FLOOR_MIN) {
        cout << "Invalid input. Please enter a floor number between 1 and 5: ";
        cin >> floor;
    }

    // Loop through each floor
    for (int i = 1; i <= floor; i++) {
        // Prompt for room numbers on each floor
        cout << "Enter total number of rooms on floor " << i << " (1-30): ";
        cin >> rooms;

        // Validate room number input
        while (rooms > ROOM_MAX) {
            cout << "Invalid input. Please enter a number of rooms between 1 and 30: ";
            cin >> rooms;
        }

        // Prompt for occupied room counts
        cout << "Enter total occupied single rooms on floor " << i << ": ";
        cin >> singleRoom;

        cout << "Enter total occupied double rooms on floor " << i << ": ";
        cin >> doubleRoom;

        cout << "Enter total occupied king rooms on floor " << i << ": ";
        cin >> kingRoom;

        cout << "Enter total occupied suite rooms on floor " << i << ": ";
        cin >> suiteRoom;

        // Update total room counts
        totalRooms += rooms;
        totalSingleRoom += singleRoom;
        totalDoubleRoom += doubleRoom;
        totalKingRoom += kingRoom;
        totalSuiteRoom += suiteRoom;
    }

    // Calculate hotel income
    double hotelIncome = totalSingleRoom * SINGLE_ROOM_RATE +
                         totalDoubleRoom * DOUBLE_ROOM_RATE +
                         totalKingRoom * KING_ROOM_RATE +
                         totalSuiteRoom * SUITE_ROOM_RATE;

    // Calculate occupancy rate
    int totalOccupiedRooms = totalSingleRoom + totalDoubleRoom + totalKingRoom + totalSuiteRoom;
    double occupancyRate = static_cast<double>(totalOccupiedRooms) / totalRooms;

    // Output results
    cout << "==============================" << endl;
    cout << "\tBlue Mont Hotel - " << location << endl;
    cout << "\tTODAY'S ROOM RATES (US$/night)" << endl;
    cout << "Single Room:\t$" << SINGLE_ROOM_RATE << endl;
    cout << "Double Room:\t$" << DOUBLE_ROOM_RATE << endl;
    cout << "King Room:\t$" << KING_ROOM_RATE << endl;
    cout << "Suite Room:\t$" << SUITE_ROOM_RATE << endl;
    cout << "==============================" << endl;
    cout << "Total Rooms:\t" << totalRooms << endl;
    cout << "Occupied Rooms:\t" << totalOccupiedRooms << endl;
    cout << "Unoccupied Rooms:\t" << totalRooms - totalOccupiedRooms << endl;
    cout << "Hotel Income:\t$" << hotelIncome << endl;
    cout << "Occupancy Rate:\t" << occupancyRate * 100 << "%" << endl;

    return 0;
}
    


