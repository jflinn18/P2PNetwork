#ifndef __SERVER_H__
#define __SERVER_H__

#include<iostream>
#include <string>
#include "Socket.h"

class Server {
	Socket* socket;

	Server(Socket* socket) {
		this->socket = socket;
	}

	void operator()() {
		std::string msg;
		do {
			msg = socket->msg_recv();

			//NOTE: Check message, then query the database for data in the message, then send results

		} while (msg != "");
	}
};


#endif