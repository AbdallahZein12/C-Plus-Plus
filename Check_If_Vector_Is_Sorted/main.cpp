#include <iostream>
#include <vector>
using namespace std;


bool InOrder(vector<int> nums) {
   int i;
   int max;
   bool inorder = true;
	for(i=0;i<nums.size();++i){
	   if (i == 0){
	      max = nums.at(i);
	   }
	   else if (nums.at(i) >= max){
	      max = nums.at(i);
	   }
	   else {
	      inorder = false;
	      break;
	   }
	}
	return inorder;
	           
}

int main() {

	vector<int> nums1(5);
	nums1.at(0) = 5;
	nums1.at(1) = 6;
	nums1.at(2) = 7;
	nums1.at(3) = 8;
	nums1.at(4) = 3;


	if (InOrder(nums1)) {
		cout << "In order" << endl;
	}
	else {
		cout << "Not in order" << endl;
	}

	vector<int> nums2(5);
	nums2.at(0) = 5;
	nums2.at(1) = 6;
	nums2.at(2) = 7;
	nums2.at(3) = 8;
	nums2.at(4) = 10;

	if (InOrder(nums2)) {
		cout << "In order" << endl;
	}
	else {
		cout << "Not in order" << endl;
	}

	return 0;
}