    //boilerplate code
//max profit by selling stocks o(n^2)
//boilerplate code
    //best time to buy and sell stock
    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    class solution{
    	public:
    		int maxProfit(vector<int> &prices)
    		{
    	
    			int maxp=0;
    			int profit=0;
    			for(int i=0;i<prices.size();i++)
    			{
    				for(int j=i+1;j<prices.size();j++)
    				{
    					profit=prices[j]-prices[i];
    		
    		        if(profit>maxp)
					{
						maxp=profit;
										}						
					}
            		
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

