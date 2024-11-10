# Depth First Search (DFS) Implementation in C++
This project implements the Depth First Search (DFS) algorithm using recursion to traverse a graph. The graph is represented as an adjacency matrix, where vertices are connected by edges.

# Program Details
**Input**
The program first prompts for the number of vertices (v) and edges (e) in the graph.
It then accepts e pairs of integers, where each pair represents an edge between two vertices.
Finally, it prompts for the source vertex from which to start the DFS traversal.
**Output**
The program will output the order in which vertices are visited using the DFS algorithm.

# Example
Input:
Enter the no of vertices: 5
Enter the no of edges: 4
0 1
0 2
1 3
1 4
Enter the source element: 0
Output:
0 1 3 4 2

# Code Explanation
add() Function: Adds an edge between two vertices in the adjacency matrix.
DSFrec() Function: A recursive function that performs DFS traversal by visiting nodes and marking them as visited.
DFS() Function: A wrapper function that initializes the visited array and calls DSFrec() to start DFS.
main() Function: Reads input, populates the adjacency matrix, and initiates DFS.

