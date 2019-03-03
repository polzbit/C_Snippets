#include "stdafx.h"
#include "string.h"

#define NAME_SIZE 20
#define ID_SIZE 10

struct address {
	char city[NAME_SIZE];
	char street[NAME_SIZE];
	int house_number;
};
struct date {
	int day, month, year;
};
struct employee {
	char name[NAME_SIZE];
	char id[ID_SIZE];
	double sallery;
	struct date birth_date;
	struct address addr;
};
void main()
{
	struct date d1 = { 1,1,1998 };
	struct address home = { "IL","shmerling", 619 };
	struct employee jon;

	strcpy_s(jon.name, "Jon Smith");
	strcpy_s(jon.id, "0123456789");
	jon.sallery = 10000000.0;
	jon.birth_date = d1;
	jon.addr = home;
}