#ifndef TRAVEL_GUI
#define TRAVEL_GUI

#include <vector>

#include "PreisMap.h"
#include "Booking.h"

using namespace std;

class GUI
{

public:

    // TravelNetwork wird als Referenz in der Klasse gespeichert, damit sie damit arbeiten kann.
	GUI(vector<PreisMap*> preisMaps) : m_rPreisMaps(preisMaps) { }

    // zeigt ein Hauptmen� an.
    // R�ckgabewert: der vom Nutzer gew�hlte Men�punkt
    int showMenu();

    // Nutzerinteraktion zum Buchen eines Fluges
    // R�ckgabewert: 'true', wenn die vom Nutzer gew�hlte Route gebucht werden soll, sonst 'false'
	bool angebotBerechnung(Node& rStart, Node& rEnde);

    // Gibt eine Liste aller gebuchten Reisen aus.
    void showBookingList();


private:

	int readAnzahl(); // Helper Funktion, um eine Stadt einzulesen.

	//PreisMap& m_rNetwork;

	vector<PreisMap*> m_rPreisMaps;

    std::list<Booking> m_bookings;

};


/*
 * Im Idealfall wirft die Anwendung im Fehlerfall eine Exception.
 */
class TravelGuiException
{

public:

    TravelGuiException(const std::string& msg) : m_msg(msg) {}

    std::string getError() const { return m_msg; }


private:

    std::string m_msg;

};

#endif