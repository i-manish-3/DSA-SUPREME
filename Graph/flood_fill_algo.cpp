#include<bits/stdc++.h>
using namespace std;

class Solution {

private:

void dfs(int row, int col, vector<vector<int>> &image, vector<vector<int>> &ans,
int initialclr, int newColor, int delrow[], int delcol[])
{
    int n = image.size();
    int m = image[0].size();
    
    ans[row][col] = newColor;
    
    for(int i = 0; i < 4; i++)
    {
        int p = delrow[i] + row;
        int q = delcol[i] + col;
        
        if(p >= 0 && p < n && q >= 0 && q < m
        && image[p][q] == initialclr 
        && ans[p][q] != newColor)
        {
            dfs(p, q, image, ans, initialclr, newColor, delrow, delcol);
        }
    }
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> ans = image;
        int initialclr = image[sr][sc];
        
        int delrow[4] = {-1, 0, 1, 0};
        int delcol[4] = {0, 1, 0, -1};
        
        dfs(sr, sc, image, ans, initialclr, newColor, delrow, delcol);
        return ans;
    }
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}