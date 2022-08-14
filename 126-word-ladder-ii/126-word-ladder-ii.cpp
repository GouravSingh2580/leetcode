class Solution {
public:
    std::vector<vector<string>> findLadders(const string &BeginWord, const string &EndWord, const vector<string>& WordList) {
        unordered_set<string> Dictionary = {WordList.begin(), WordList.end()};
        Dictionary.erase(BeginWord);
        
        unordered_set<string> ChildrenDiscoveredFromThisLevel;
        unordered_map<std::string, vector<string>> NodeToParents = {{BeginWord, {}}};
        bool EndFound = false;
        
        for(queue<string> q = queue<string>{{BeginWord}}; q.empty() == false && EndFound == false; ) {
            ChildrenDiscoveredFromThisLevel.clear();
            for(int i = q.size(); i > 0; --i) {
                const string Parent = move(q.front());
                string Child = Parent;
                q.pop();
                for(int ChI = 0; ChI < Child.size(); ++ChI) {
                    const char Backup = Child[ChI];
                    for(char NewCh = 'a'; NewCh <= 'z'; ++NewCh) {
                        Child[ChI] = NewCh;
                        if(Dictionary.find(Child) == Dictionary.end())
                            continue;
                        if(ChildrenDiscoveredFromThisLevel.find(Child) == ChildrenDiscoveredFromThisLevel.end()) {
                            ChildrenDiscoveredFromThisLevel.insert(Child);
                            q.push(Child);
                        }
                        EndFound = EndFound || (Child == EndWord);
                        NodeToParents[Child].push_back(Parent);
                    }
                    Child[ChI] = Backup;
                }
            }
            for(const string &Discovered: ChildrenDiscoveredFromThisLevel)
                Dictionary.erase(Discovered);
        }
        vector<vector<string>> Result;
        if(EndFound) {
            vector<string> Path = {EndWord};
            GetPaths(Result, EndWord, NodeToParents, Path);
        }
        return Result;
    }
    void GetPaths(vector<vector<string>> &Result, const string &Node, unordered_map<string, vector<string>> &NodeToParents, vector<string> &Path) {
        if(NodeToParents[Node].empty()) {
            Result.push_back({Path.rbegin(), Path.rend()});
            return;
        }
        for(const std::string &Parent: NodeToParents[Node]) {
            Path.push_back(Parent);
            GetPaths(Result, Parent, NodeToParents, Path);
            Path.pop_back();
        }
    }
};