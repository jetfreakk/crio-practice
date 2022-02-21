class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans(encoded.size()+1);
        ans[0]=first;
        for(int i=1;i<ans.size();i++)
        {
            ans[i]=ans[i-1]^encoded[i-1];
        }
        return ans;
    }
};

SELECT users.name, COUNT(posts.post_id) FROM users JOIN posts

ON users.user_id = posts.user_id

WHERE posts.post_id IN (SELECT posts.post_id

                        FROM posts

                        WHERE posts.post_text LIKE "%gym%"
)

GROUP BY users.user_id