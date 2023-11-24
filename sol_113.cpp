class Solution {
public:

    map<int, vector<int>> func(map<int,vector<int>> graph, Node* node){
        int val = node->val;
        vector<Node*> nb = node->neighbors;
        vector<int> nodes;

        if(graph.find(val) == graph.end()){
            for(Node* i: nb){
                nodes.push_back(i->val);
            }
            graph.insert({val, nodes});

            for(Node* i: nb)
                graph = func(graph,i);
        }
        return(graph); 
    }

    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return node;

        map<int, vector<int>> graph = {};
        graph = func(graph,node);
        vector<Node*> Insert (graph.size(),NULL);
        int ctr = 0;

        for(auto itr = graph.begin(); itr != graph.end(); ++itr){
            Node* temp = new Node(itr->first);
            Insert[temp->val - 1] = temp;
        }

        for(auto itr = graph.begin(); itr != graph.end(); ++itr){
            for(int i: itr->second){
                Insert[itr->first - 1]->neighbors.push_back(Insert[i -1]);
            }
        }

        return Insert[0];
    }
};
