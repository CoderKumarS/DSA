#include <iostream>
#include <string>
#include <queue>

struct Flight {
    std::string flightNumber;
    int departureTime; // Assuming integers as hours (e.g., 8, 12, 18)
    double ticketPrice;

    Flight(const std::string& number, int time, double price) : flightNumber(number), departureTime(time), ticketPrice(price) {}

    bool operator<(const Flight& other) const {
        if (departureTime == other.departureTime) {
            return ticketPrice < other.ticketPrice;
        }
        return departureTime > other.departureTime;
    }
};

int main() {
    std::priority_queue<Flight> flightQueue;

    int choice;
    do {
        //std::cout << "Airline Flight Reservation System\n";
        //std::cout << "1. Add flight\n";
        //std::cout << "2. Book ticket\n";
        //std::cout << "3. View next available flight\n";
        //std::cout << "4. Exit\n";
        //std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string flightNumber;
                int departureTime;
                double ticketPrice;
                std::cin.ignore();
                std::getline(std::cin, flightNumber);
                std::cin >> departureTime;
                std::cin >> ticketPrice;
                flightQueue.push(Flight(flightNumber, departureTime, ticketPrice));
                std::cout << "Flight added to the system.\n";
                break;
            }
            case 2:
                if (!flightQueue.empty()) {
                    std::cout << "Booked ticket for flight: " << flightQueue.top().flightNumber << "\n";
                    flightQueue.pop();
                } else {
                    std::cout << "No flights available.\n";
                }
                break;
            case 3:
                if (!flightQueue.empty()) {
                    std::cout << "Next available flight: " << flightQueue.top().flightNumber << "\n";
                } else {
                    std::cout << "No flights available.\n";
                }
                break;
            case 4:
                std::cout << "Exiting the application.\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
