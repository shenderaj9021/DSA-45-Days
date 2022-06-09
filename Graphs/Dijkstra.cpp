// #include<iostream>
// #include<bits//stdc++.h>
// vector<int> dijsktra(vector<vector<int>> &vec,int vertices,int edges,int source){
//     //creater adjancey list
//     unordered_map<int,list<pair<int,int>> adj;
//     for(int i=0;i<edges;i++){
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2];

//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));

//     }
//     vector<int> dist(vertices);
//     for(int i=0;i<vertices;i++){
//         dist[i] =INT_MAX;
//     }
//     set<pair<int,int>> st;
//     dist[source] =0;
//     st.insert({0.source});
//     while(!st.empty()){
//         pair<int,int> top = *(st.begin());
//         int nodedistance = top.first;
//         int topnode = top.second;
//         st.erase(st.begin())
//         for(auto neighbour:adj[topnode]){
//             if(nodedistance+neighbour.second < dist[neightbour.first]){
//                     if(st.find({dist[neighbour.first],neighbour.first})!=st.end()){
//                         st.erase({dist[neghbour.first],neighbour.first);
//                     }
//                     dist[neighbour.first ]=nodedistance + neighbour.second;
//                     st.insert({dist[neghbour.first],neighbour.first});
//             }
//         }
//     }
// }