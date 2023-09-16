#include <iostream>


int max_subsequence_sum(int sequence[] , unsigned int size){
    int compared_result{};
    int eln_num{};
    for(unsigned int starting_point{}; starting_point < size; ++starting_point){
        while(eln_num <= size){
            int temp_result{};
            if(eln_num == 0){
                if(sequence[starting_point] > compared_result){
                  compared_result = sequence[starting_point];  
                }
            }
            for(unsigned int i{starting_point}; i < eln_num; ++i){
                temp_result += sequence[i];
            }
            if(temp_result > compared_result){
                compared_result = temp_result;
            }
            eln_num++;
        }
        eln_num = 0;
    }
            
    return compared_result;
}

    int main(){
        int nums[]{3,-4,6,1,1,-2,2,3};
        auto result = max_subsequence_sum(nums, std::size(nums));
        std::cout << "result: " << result; 

        return 0;
    }



