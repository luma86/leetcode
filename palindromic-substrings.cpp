class Solution {
public:
   bool isPalindrome(string s)  {
      
       if(s.size()<2)
        return true;
       
      for(int i=0;i<s.size()/2;i++)
      {
          if(s[i]!=s[s.size()-i-1])
          {
              return false;  
              
          }

      }
       
       return true;
       
   }
    
    
    
    int countSubstrings(string s) {
        
        int count=s.length();
        int size;

        for(int i=0;i<s.length();i++)
            for(int j=s.length()-1;j>i;j--)
            {
             if(isPalindrome(s.substr(i,j-i+1)))
             {
                count++;
                 
             }
               
            }
  
       return count; 
        
        
        
    }
};