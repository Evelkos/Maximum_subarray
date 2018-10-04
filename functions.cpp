# include "functions.hpp"

std::vector<int> transform_values_into_vector(int f_value, int s_value) {
    std::vector<int> result;
    result.push_back(f_value);
    result.push_back(s_value);
    return result;
}

std::vector<int> find_maximum_area(std::vector<int> vec) {
    int beg_max_sub = 0, end_max_sub = 0;
    int total_sum = vec[0], local_sum = vec[0];
    int tmp_local_beg;

    for (unsigned i = 1 ; i < vec.size() ; i++) {
        if (vec[i] >= local_sum + vec[i]) {
            local_sum = vec[i];
            tmp_local_beg = i;
        }
        else
            local_sum = local_sum + vec[i];
        if (total_sum < local_sum) {
            total_sum = local_sum;
            beg_max_sub = tmp_local_beg;
            end_max_sub = i;
        }
    }
    return transform_values_into_vector(beg_max_sub, end_max_sub);
}

void show_vector(std::vector<int> vec, int beg, int fin) {
    for (int i = beg ; i <= fin ; i++)
        std::cout << vec[i] << " ";
    std::cout<<std::endl;
}
