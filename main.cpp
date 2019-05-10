#include"Graph.hpp"
#include"permutations.hpp"


int main(int argc, char const *argv[])
{
    size_t ncols =3;
    
    
    Graph g("the_petersen_graph.txt");

    //std::cout<<g;

    ncol2SAT(g,ncols); 

    return 0;
}
