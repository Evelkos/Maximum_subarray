#include "functions.hpp"

using namespace std;

int main()
{
    vector<int> vec = {4, -10, 3, 29, -3, 12, -5, 4};
    vector<int> result = find_maximum_area(vec);

    show_vector(vec, 0, vec.size() - 1);
    show_vector(vec, result[0], result[1]);
    return 0;
}
