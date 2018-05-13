#include "beaker.hpp"

#include <iostream>
using std::cout;
using std::endl;
#include <chrono>
#include <thread>

Beaker::Beaker()
{
	// ?
}

Beaker::~Beaker()
{
	
}

void Beaker::putCells(Cell *cells)
{
	this->cell_group = cells;
}

void Beaker::broadcast(float time_sec)
{
	using namespace std::chrono;

	/* time is important when broadcasting ! */
	typedef steady_clock clock;
	auto start_tp = clock::now();

	cout << "Broadcasting..." << endl;

	auto end_tp = clock::now();

	duration<float> d_floatsec = end_tp - start_tp;
	//milliseconds d_millisec = duration_cast<milliseconds>(d_floatsec);
	nanoseconds d_nanosec = duration_cast<nanoseconds>(d_floatsec);

	//cout << "Current Time: " << d_floatsec.count() << "s, " << d_millisec.count() << "ms\n";
	cout << "Current Time: " << d_floatsec.count() << "s, " << d_nanosec.count() << "ns\n";

	std::this_thread::sleep_for(duration<float>(1));
}
