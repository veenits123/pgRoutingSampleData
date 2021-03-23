#include <iostream>
#include <boost/config.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/edge_coloring.hpp>
#include <boost/graph/properties.hpp>

using namespace boost;

int main(int, char*[])
{
    
    using namespace std;
    typedef adjacency_list< vecS, vecS, undirectedS, no_property, size_t,
        no_property >
        Graph;

    typedef std::pair< std::size_t, std::size_t > Pair;
    Pair edges[14] = { Pair(0, 3), // a-d
        Pair(0, 5), // a-f
        Pair(1, 2), // b-c
        Pair(1, 4), // b-e
        Pair(1, 6), // b-g
        Pair(1, 9), // b-j
        Pair(2, 3), // c-d
        Pair(2, 4), // c-e
        Pair(3, 5), // d-f
        Pair(3, 8), // d-i
        Pair(4, 6), // e-g
        Pair(5, 6), // f-g
        Pair(5, 7), // f-h
        Pair(6, 7) }; // g-h

    Graph G(10);

    for (size_t i = 0; i < sizeof(edges) / sizeof(edges[0]); i++)
        add_edge(edges[i].first, edges[i].second, G);

    size_t colors = edge_coloring(G, get(edge_bundle, G));

    cout << "Colored using " << colors << " colors" << endl;
    for (size_t i = 0; i < sizeof(edges) / sizeof(edges[0]); i++)
    {
        cout << "  " << (char)('a' + edges[i].first) << "-"
             << (char)('a' + edges[i].second) << ": "
             << G[edge(edges[i].first, edges[i].second, G).first] << endl;
    }

    return 0;
}