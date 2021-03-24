#include <boost/config.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/edge_coloring.hpp>
#include <boost/graph/properties.hpp>
#include <iostream>

using namespace boost;
using namespace std;

int main(int, char*[]) {
    typedef adjacency_list<vecS, vecS, undirectedS, no_property, size_t,
                           no_property>
        Graph;

    typedef std::pair<std::size_t, std::size_t> Pair;
    Pair edges[14] = {Pair(1, 4),
                      Pair(1, 6),
                      Pair(2, 3),
                      Pair(2, 5),
                      Pair(2, 7),
                      Pair(2, 10),
                      Pair(3, 4),
                      Pair(3, 5),
                      Pair(4, 6),
                      Pair(4, 9),
                      Pair(5, 7),
                      Pair(6, 7),
                      Pair(6, 8),
                      Pair(7, 8)};

    Graph G(10);

    for (size_t i = 0; i < sizeof(edges) / sizeof(edges[0]); i++)
        add_edge(edges[i].first, edges[i].second, G);

    size_t colors = edge_coloring(G, get(edge_bundle, G));

    cout << "Colored using " << colors << " colors" << endl;
    for (size_t i = 0; i < sizeof(edges) / sizeof(edges[0]); i++) {
        cout << "  " << edges[i].first << "-"
             << edges[i].second << ": "
             << G[edge(edges[i].first, edges[i].second, G).first]+1 << endl;
    }

    return 0;
}