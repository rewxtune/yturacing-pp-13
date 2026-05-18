#include "RoadManager.h"

int main()
{
	RoadManager road("Nurburgring");

	road.addLimit(10);
	road.addLimit(30);
	road.addLimit(120);

	std::cout << "Segment 3: " << road.getLimit(2) << " kph\n";

	std::cout << "Segment count: " << road.getSegmentCount() << '\n';

	road.checkSafety(20, 0);

	std::cout << "\nAll road infos: " << '\n';
	road.printRoadInfo();

	return 0;
}
