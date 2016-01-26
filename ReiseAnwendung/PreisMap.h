#ifndef PREISMAP
#define PREISMAP

#include "Graph.h"


class PreisMap : public Graph
{

public:

    // kleine Hilfsfunktion, um eine bidirektionale Flugverbindung schneller einzutragen
	void addPreisAngebot(Node& rSchritt1, Node& rSchritt2, double angebot);

    // kleine Hilfsfunktion, um eine bidirektionale Busverbindung schneller einzutragen
    //void addBusRoute(Node& rCity1, Node& rCity2, double dist);

    // Nodes anhand ihrer ID abfragen. (wird f�r die Nutzereingabe ben�tigt)
    Node* getNodeById(const std::string& rNodeId);


private:

    // Graph::addEdge wird private. 
    // Es soll 'von au�en' nur noch addFlightRoute und addBusRoute verwendet werden.
    using Graph::addEdge; 

};


#endif