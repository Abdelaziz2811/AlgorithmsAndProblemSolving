#pragma warning(disable : 4996)
#pragma once

#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

class clsQueueLine {

private:
	string _Prefix;
	short _TotalTickets;
	short _AverageServeTime;

	class clsTicket {

	private:
		string _Prefix;
		string _TicketTime;
		short _TotalTickets;
		short _WaitingClients;
		short _AverageServeTime;

	public:
		clsTicket(string Prefix, string TicketTime, short TotalTickets, short WaitingClients, short AverageServeTime) {

			_Prefix = Prefix;
			_TicketTime = TicketTime;
			_TotalTickets = TotalTickets;
			_WaitingClients = WaitingClients;
			_AverageServeTime = AverageServeTime;
		}

		string FullNumber() {

			return _Prefix + to_string(_TotalTickets);
		}

		short ExpectedServeTime() {

			return _WaitingClients * _AverageServeTime;
		}

		void Print() {

			cout << "\n\t\t\t ________________________\n";
			cout << "\n\t\t\t\t   " << FullNumber() << endl;
			cout << "\n\t\t\t    " << _TicketTime << endl;
			cout << "\t\t\t    Waiting Clients = " << _WaitingClients << endl;
			cout << "\t\t\t       Serve Time in" << endl;
			cout << "\t\t\t         " << ExpectedServeTime() << " Minutes" << endl;
			cout << "\t\t\t ________________________\n";
		}
	};

	string _GetSystemDate() {

		time_t t = time(0);
		tm* now = localtime(&t);

		return to_string(now->tm_mday) + "/" + to_string(now->tm_mon + 1) + "/" + to_string(now->tm_year + 1900)
		+ " - " + to_string(now->tm_hour) + ":" + to_string(now->tm_min) + ":" + to_string(now->tm_sec);
	}

public:

	queue <clsTicket> QueueLine;

	clsQueueLine(string Prefix, short AverageServeTime) {
		
		_Prefix = Prefix;
		_AverageServeTime = AverageServeTime;
		_TotalTickets = 0;
	}

	void IssueTicket() {

		_TotalTickets++;
		clsTicket Ticket(_Prefix, _GetSystemDate(), _TotalTickets, WaitingClients(), _AverageServeTime);
		QueueLine.push(Ticket);
	}

	short WaitingClients() {

		return QueueLine.size();
	}

	string WhoIsNext() {

		if (QueueLine.empty())
			return "No One Left!";
		else
			return QueueLine.front().FullNumber();
	}

	bool ServeNextClient() {

		if (QueueLine.empty())
			return false;
		else {

			QueueLine.pop();
			return true;
		}
	}

	short ServedClients() {

		return _TotalTickets - WaitingClients();
	}

	void PrintInfo() {

		cout << "\n\t\t\t ________________________ \n";
		cout << "\n\t\t\t        Queue Info \n";
		cout << "\t\t\t ________________________ \n\n";
		cout << "\t\t\t   Prefix    = " << _Prefix << endl;
		cout << "\t\t\t   Total Tickets    = " << _TotalTickets << endl;
		cout << "\t\t\t   Served Clients   = " << ServedClients() << endl;
		cout << "\t\t\t   Waiting Clients  = " << WaitingClients() << endl;
		cout << "\t\t\t ________________________ \n\n";
	}

	void PrintTicketsLineRTL() {

		if (QueueLine.empty()) {
			cout << "\t\tTickets : No Tickets ";
			return;
		}
		else
			cout << "\t\tTickets : ";

		queue <clsTicket> TempQueueLine = QueueLine;

		stack <string> TicketFullNum;

		while (!TempQueueLine.empty()) {

			TicketFullNum.push(TempQueueLine.front().FullNumber());
			TempQueueLine.pop();
		}
		
		while (!TicketFullNum.empty()) {

			cout << TicketFullNum.top() << " <-- ";
			TicketFullNum.pop();
		}
		cout << "\n";
	}

	void PrintTicketsLineLTR() {

		if (QueueLine.empty()) {
			cout << "\t\tTickets : No Tickets ";
			return;
		}
		else
			cout << "\t\tTickets : ";

		queue <clsTicket> TempQueueLine = QueueLine;

		while (!TempQueueLine.empty()) {

			cout << TempQueueLine.front().FullNumber() << " --> ";
			TempQueueLine.pop();
		}
	}

	void PrintAllTickets() {

		queue <clsTicket> TempQueueLine = QueueLine;

		cout << "\n\n\t\t\t      ---Tickets---";

		while (!TempQueueLine.empty()) {

			TempQueueLine.front().Print();
			TempQueueLine.pop();
		}
	}

};

