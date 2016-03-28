#include <iostream>
#include <vector>

using namespace std;

const int NODES = 50;
inline double prob() { return rand() / double(RAND_MAX); }

class Node {
    public:
        double weight;
        vector<Node*> neighbors;
};

class Graph
{
    public:
        Graph();
        void generateGraph(double density, double minDist, double maxDist);

    private:
        int nodeCount;
        vector<Node> nodes;
};

Graph::Graph() {
    this->nodeCount = NODES;
}

void Graph::generateGraph(double density, double minDist, double maxDist)
{
    for (int i = 0; i < this->nodeCount; i++) {
//        this->nodes.push_back(i)

        for (int j = 0; j < this->nodeCount; j++){
            if (i != j) {
                if (prob() < density) {
                    Node* newNode = new Node();
                    newNode->weight = prob() * (maxDist - minDist);
//                    this->nodes[i].neighbors.push_back(newNode);
//                    cout << this->nodes[i].weight << endl;
                }
            }
        }
    }
}

/**
 * Runs a number of trials in a Monte Carlo simulation
 * to determine the average shortest path in random undirected graphs
 */
int main(){

    cout << "Running trials..." << endl;

    int numTrials = 10;
    double sum = 0.0;
    double minDistance = 1.0;
    double maxDistance = 10.0;

    for (int i = 0; i < numTrials; i++) {

        // graph with 20% density
        Graph* graph1 = new Graph();
        graph1->generateGraph(0.2, minDistance, maxDistance);

        // graph with 40% density
        Graph* graph2 = new Graph();
        graph2->generateGraph(0.4, minDistance, maxDistance);
    }

    return 0;
}
