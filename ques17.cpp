//boilerplate code
    //best time to buy and sell stock
    //optimised solution
    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    class solution{
    	public:
    		int maxProfit(vector<int> &prices)
    		{
    			int minp=prices[0];
    			int maxp=0;
    			int profit=0;
    			for(int i=0;i<prices.size();i++)
    			{
    				minp=min(minp,prices[i]);
    				profit=prices[i]-minp;
    				maxp=max(maxp,profit);
    			}
    			return maxp;
    		}
    		
    };
    int main()
    {
    vector<int>prices{7,1,5,3,6,4};
    solution ob;
    cout<<"Max Profit"<<ob.maxProfit(prices);
    return 0;
    
    }

