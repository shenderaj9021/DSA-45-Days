/* Problem link -  https://leetcode.com/problems/flood-fill/ 

use recursive approcah same as we use in computer graphics *?
void visit(vector<vector<int>>& image,int sr,int sc,int newColor,int same){
            if(image[sr][sc]==same){
                image[sr][sc] = newColor;
                if(sr>=1){
                    visit(image,sr-1,sc,newColor,same);
                }
                if(sc>=1){
                    visit(image,sr,sc-1,newColor,same);
                }
                if(sr+1<image.size()){
                    visit(image,sr+1,sc,newColor,same);
                }
                if(sc+1<image[0].size()){
                    visit(image,sr,sc+1,newColor,same);
                }
            }
           
        

        return ;
       
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
      
        if(image[sr][sc]!=newColor){visit(image,sr,sc,newColor,image[sr][sc]);
            }
        return image;
        
    }

*/
