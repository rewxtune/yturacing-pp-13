#pragma once
#include <iostream>
#include <string>
#include <vector>

class RoadManager {
public:
	RoadManager(std::string road_name);

	void addLimit(int limit);

	int getLimit(int index) const;

	void setLimit(int index, int new_limit);

	int getSegmentCount();

	void checkSafety(int speed, int index);

	void printRoadInfo();

private:
	std::string				m_road_name;
	std::vector<int>	m_speed_limits;
};
