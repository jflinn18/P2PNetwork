#ifndef __CLIENT_H__
#define __CLIENT_H__

#include <iostream>
#include <set>
#include <string>
#include <vector>
#include "Socket.h"

class Client {
	std::set<std::string> knownServerIPs;
	std::vector<Socket*> connections;
	std::string myIP;
	const int port = 12345;

	Client() {
		
	}
	~Client(){}

	//adds a known IP to the Client's set of IPs
	void addKnownIP(std::string newIP) {
		knownServerIPs.insert(newIP);
	}


};

#endif