#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#include <map>
typedef std::map<std::string, int> maptype;
/*
1.两数之和
给定一个整数数组 nums 和一个目标值 target，
请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
/*
*知识点：
*	1.vector作为函数参数和函数返回值使用
*	2.形参用引用代替
*	3.哈希表map的使用
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
		map<int, int> map1;
        for(int i=0; i<len; i++)
        {		
			if(map1.count(target - nums[i]) != 0)
			{
				return {map1.find(target - nums[i])->second, i};
			}
			map1[nums[i]] = i;
        }
		return {};
    }
	string reverseWords(string s) {
        std::stack<std::string> mystack;
		cout << s << "\n";
        string temp;
        temp.clear();
        for(int i = 0; i < s.size(); i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || 
			   (s[i] >= 'a' && s[i] <= 'z') || 
			                (s[i] == ',') || s[i] == '.' || s[i] == '!'){
                temp += s[i];
            }
            else {
                if(!temp.empty()){
                    mystack.push(temp);
                    temp.clear();
                }
            }
        }
        if(!temp.empty()){
            mystack.push(temp);
            temp.clear();
        }
        while(mystack.size()){
            temp += mystack.top();
            mystack.pop();
         	temp += ' ';
        }
        return temp;
    }
};

int main(void)
{
	Solution test;
	string str = "this is a pig!";
	cout << test.reverseWords(str) << " \n";

	return 0;
}
