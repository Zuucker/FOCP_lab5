#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    float weight;
    struct Node* next;
    void connect(float w, Node* n)
    {
        weight = w;
    }
    Edge(float w, Node* n)
    {
        weight = w;
        next = n;
    }
};

struct Node {
    int value;
    vector<Edge>edges;
    void set_value(int v)
    {
        value = v;
    }
    void add_edge(Edge& e)
    {
        edges.push_back(e);
    }
    Node(float v)
    {
        value = v;
    }
    void connect(float w, Node* next)
    {
        Edge e(w, next);
        edges.push_back(e)
            ;
    }
};

int main()
{
    vector<Node> graph;
    Node n0(0);
    Node n1(1);
    Node n2(2);


    n0.connect(1.5, &n1);
    n1.connect(3.1, &n2);

    Node new_node(123);

    n0.connect(5.6, &new_node);

    graph.push_back(n0);
    graph.push_back(n1);
    graph.push_back(n2);
    graph.push_back(new_node);

    return 0;
}