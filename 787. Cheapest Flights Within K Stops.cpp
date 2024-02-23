class Solution {
    int dp[102][102];
public:
    int getCheapestPrice(int currentCity, int& destination, int remainingStops, vector<vector<pair<int, int>>>& adjList) {
        if (currentCity == destination) { //it will cost 0 to reach destination
            return 0;
        }
        if (remainingStops < 0) {//invalid flight path
            return INT_MAX;
        }
        if (dp[currentCity][remainingStops] != -1) {
            return dp[currentCity][remainingStops];
        }

        int minPrice = INT_MAX;

        //explore all neighbor city and return min price
        for (auto& neighbor : adjList[currentCity]) {
            int neighborCity = neighbor.first;
            int price = neighbor.second;
            int nextPrice = getCheapestPrice(neighborCity, destination, remainingStops - 1, adjList);
            if (nextPrice == INT_MAX) { //if invalid path skip(can cause overflow)
                continue;
            }
            minPrice = min(minPrice, price + nextPrice);
        }

        return dp[currentCity][remainingStops] = minPrice;
    }

    int findCheapestPrice(int numCities, vector<vector<int>>& flights, int source, int destination, int maxStops) {
        // source -> {destination, price},.....
        vector<vector<pair<int, int>>> adjacencyList(numCities);
        for (auto& flight : flights) {
            int source = flight[0];
            int destination = flight[1];
            int price = flight[2];
            adjacencyList[source].push_back({destination, price});
        }
        memset(dp, -1, sizeof(dp));
        int cheapestPrice = getCheapestPrice(source, destination, maxStops, adjacencyList);
        return cheapestPrice == INT_MAX ? -1 : cheapestPrice;
    }
};
