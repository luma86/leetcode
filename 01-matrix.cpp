class Solution {
public:
       
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        vector<vector<int>> result;
        vector<int> row;
        vector<pair<int,int>> zeros;
        int min=10000;
        int res;
        
        for(int i=0;i<matrix.size();i++)
          for(int j=0;j<matrix[0].size();j++)
              if(matrix[i][j]==0)
                  zeros.push_back(make_pair(i,j));
        
        
        for(int i=0;i<matrix.size();i++)
        {
          for(int j=0;j<matrix[0].size();j++)
            {
               if(matrix[i][j]==0)
               {
                row.push_back(0);
                continue;
               }
              
              for(int x=0;x<zeros.size();x++)
            {
                  res=abs(i-zeros[x].first)+abs(j-zeros[x].second);
                  
          
                  if(res<min)
                   min=res;
                  
                  if(min==1)
                      break; 
            }
             
                row.push_back(min);
                min=10000;  
            }
            
            result.push_back(row);
            row.clear();   
            
        }
        
        
        
        return result;
    }
};