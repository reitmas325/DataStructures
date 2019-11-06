#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <iostream>
#include "../DLL/DLL.hpp"
#include <string>

using namespace std;

class Vertex{
	public:
		enum class Colors { BLACK, GRAY, WHITE };
	private:
		string name;
		DLL<Vertex> *neighbors;
		int distance = 0;
		Colors color{Colors::BLACK};
		string predecesor = "";
		int weigth = 0;
		int discovery_time;
		int finish_time;

	public:
		Vertex();
		Vertex(string _name);
		string getName();
		int getIntName();
		int getDistance();
		void setDistance(int _distance);
		Colors getColor();
		void setColor(Colors _color);
		string getPredecesor();
		void setPredecesor(string _predecesor);
		int getWeight();
		DLL<Vertex> *getNeighbors();
		void setFinishTime(int _time);
		int getFinishTime();
		void setDiscoveryTime(int _time);
		int getDiscoveryTime();
		void addNeighbors(Vertex v);
		void print();

};

#endif