#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main() {

	clsQueueLine PayBillsQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);

	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "Pay Bills Queue info : \n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();

	PayBillsQueue.PrintAllTickets();

	PayBillsQueue.ServeNextClient();
	cout << "\nPay Biils Queue After Serving One Client : \n";
	PayBillsQueue.PrintInfo();

	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();

	cout << "Subscription Queue info : \n";
	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintAllTickets();

	SubscriptionsQueue.ServeNextClient();
	cout << "\nPay Subscriptions Queue After Serving the first Client : \n";
	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.ServeNextClient();
	cout << "\nPay Subscriptions Queue After Serving the second Client : \n";
	SubscriptionsQueue.PrintInfo();

	return 0;
}