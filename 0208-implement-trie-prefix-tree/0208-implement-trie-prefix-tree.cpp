class TreeNodes
{
public:
    char data;
    TreeNodes *children[26];
    bool isTerminal;
    TreeNodes(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TreeNodes *root;
    Trie() {
        root = new TreeNodes('\n');
    }
    
    void insertWord(TreeNodes *root, string word)
    {
        // using recursion base case ;
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        // taking every word in caps latter ;
        int index = word[0] - 'a'; // here word[0] is the word at first postion and givin it to its assci value;
        TreeNodes *child;
        // there are two case to insert word into the trie 1) word is present 2) word is not present ;

        // first if the word is peresent into the trie
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else // word is not present into the trie so we have to insert;
        {
           child = new TreeNodes(word[0]);
            root->children[index] = child;
        }

        // now further word will done by recursion
        insertWord(child, word.substr(1));
    }
    
    void insert(string word) {
        insertWord(root, word);
        // return;
    }
    
    bool searchword(TreeNodes *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'a';
        TreeNodes *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        { // not present;
            return  false;
        }

         return searchword(child, word.substr(1)); // recursive call to further search;
    }
    
    bool p(TreeNodes *root, string word)
    {
        if (word.length() == 0)
        {
            return true;
        }
        int index = word[0] - 'a';
        TreeNodes *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        { // not present;
            return  false;
        }

         return p(child, word.substr(1)); // recursive call to further search;
    }
    
    bool search(string word) {
        return  searchword(root, word);
    }
    
    bool startsWith(string prefix) {
//         Trie *t = new Trie();

//         //constrain here every word shoud be in cps letter ;

//         t->insert(prefix);
    
//         if(t->search(prefix)) return true;
        
//         return false;
        return p(root,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */