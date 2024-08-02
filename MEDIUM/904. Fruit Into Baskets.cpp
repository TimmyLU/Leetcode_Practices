class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int>basket;
        int left = 0;
        int max_fruit_tree = 0;
        for(int right = 0;right < fruits.size();right++){
            basket[fruits[right]]++; // 把當前水果加入map
            while(basket.size() > 2){
                basket[fruits[left]]--; // left所在位置的數量-1
                if(basket[fruits[left]] == 0){
                    basket.erase(fruits[left]); // 如果數量為0則erase
                }
                left++;
            }
            max_fruit_tree = max(max_fruit_tree, (right - left) + 1);
        }
        return max_fruit_tree;
    }
};