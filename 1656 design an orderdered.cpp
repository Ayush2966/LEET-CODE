class OrderedStream {
public:

    string v[1000];
    int curr=0;

    OrderedStream(int n) {


        
    }
    
    vector<string> insert(int idKey, string value) {
        v[idKey-1]=value;
        vector<string>ans;
        while(v[curr]!=""){
            ans.push_back(v[curr]);
            curr++;
        }
        return ans;

        
        
    }
};
