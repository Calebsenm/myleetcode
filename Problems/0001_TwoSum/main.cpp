#include <iostream> 
#include <vector>

using namespace std;

class Solution{

public:
  vector <int> twoSum(vector <int> nums, int target){
    vector <int> result;
    
    for(int i = 0; i < nums.size(); i++ ){
      for(int j = i+1 ; j < nums.size(); j++){        
        if(nums[i] + nums[j] == target ){
          result.push_back(i);
          result.push_back(j);
        }
      }
    }
    return result;  
  }
};


int main(){
    Solution solution;
    vector<int> numbers = {2,7,11,15,5};
    int target = 7;
    
    vector<int> result = solution.twoSum(numbers, target);
    cout << "indices " << result[0] << " "<< result[1] << endl; 
}


