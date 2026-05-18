#include "RoadManager.h"

//	RoadManager(std::string road_name);
//	void addLimit(int limit);
//	int getLimit(int index) const;
//	void setLimit(int index, int new_limit);
//	int getSegmentCount();
//	void checkSafety(int speed, int index);
//	void printRoadInfo();


RoadManager::RoadManager(std::string road_name)
{
	m_road_name = road_name;
}

void RoadManager::addLimit(int limit)
{
	if (limit <= 0)
	{
		std::cerr << "Limit value isnt proper, Exiting..\n";
		return;
	}

	m_speed_limits.push_back(limit);
}

int RoadManager::getLimit(int index) const
{
	return m_speed_limits[index];
}

void RoadManager::setLimit(int index, int new_limit)
{
	if (new_limit <= 0)
	{
		std::cerr << "Limit value isnt proper, Exiting..\n";
		return;
	}

	m_speed_limits[index] = new_limit;
}

int RoadManager::getSegmentCount()
{
	return m_speed_limits.size();
}

void RoadManager::checkSafety(int speed, int index)
{
	if (speed > m_speed_limits[index]) {
		std::cout << "UR FAST! SLOW..\n";
	}
	else {
		std::cout << "UR SPEED IS OK\n";
	}
}

void RoadManager::printRoadInfo()
{
	std::cout << "Road Name: " << m_road_name << '\n';
	std::cout << "Segments:\n";
	for (int i = 0; i < m_speed_limits.size(); i++)
	{
		std::cout << i + 1 << ": " << m_speed_limits[i] << ", ";
	}
	std::cout << '\n';
}
