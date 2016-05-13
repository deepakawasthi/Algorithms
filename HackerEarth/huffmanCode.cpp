// C program for Huffman Coding
#include <stdio.h>
#include <stdlib.h>

// This constant can be avoided by explicitly calculating height of Huffman Tree
#define MAX_TREE_HT 100

// A Huffman tree node
struct MinHeapNode
{
	int data; // One of the input characters
	struct MinHeapNode *left, *right; // Left and right child of this node
};

// A Min Heap: Collection of min heap (or Hufmman tree) nodes
struct MinHeap
{
	int curr_size; // Current size of min heap
	int capacity; // capacity of min heap
	struct MinHeapNode **arr; // Attay of minheap node pointers
};

// A utility function allocate a new min heap node with given character
// and frequency of the character
struct MinHeapNode* newNode(int item)
{
	struct MinHeapNode* temp = (struct MinHeapNode*) malloc(sizeof(struct MinHeapNode));
	temp->left = temp->right = NULL;
	temp->data = item;
	return temp;
}

// A utility function to create a min heap of given capacity
struct MinHeap* createMinHeap(int capacity)
{
	struct MinHeap* minHeap = (struct MinHeap*) malloc(sizeof(struct MinHeap));
	minHeap->curr_size = 0; // current size is 0
	minHeap->capacity = capacity;
	minHeap->arr = (struct MinHeapNode**) malloc(minHeap->capacity * sizeof(struct MinHeapNode*));
	return minHeap;
}

// A utility function to swap two min heap nodes
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b)
{
	struct MinHeapNode* t = *a;
	*a = *b;
	*b = t;
}

// A utility function to insert a new node to Min Heap
void insertMinHeap(struct MinHeap* minHeap, struct MinHeapNode* minHeapNode)
{
	++minHeap->curr_size;
	int i = minHeap->curr_size - 1;
	while (i && minHeapNode->data < minHeap->arr[(i-1)/2]->data)
	{
		minHeap->arr[i] = minHeap->arr[(i-1)/2];
		i = (i-1)/2;
	}
	minHeap->arr[i] = minHeapNode;
}

// The standard minHeapify function.
void minHeapify(struct MinHeap* minHeap, int idx)
{
	int smallest = idx;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;

	if (left < minHeap->curr_size && minHeap->arr[left]->data < minHeap->arr[smallest]->data)
        smallest = left;

    if (right < minHeap->curr_size && minHeap->arr[right]->data < minHeap->arr[smallest]->data)
        smallest = right;

    if (smallest != idx)
    {
        swapMinHeapNode(&minHeap->arr[smallest], &minHeap->arr[idx]);
        minHeapify(minHeap, smallest);
    }
}

// A standard function to extract minimum value node from heap
struct MinHeapNode* extractMin(struct MinHeap* minHeap)
{
	struct MinHeapNode* temp = minHeap->arr[0];
	minHeap->arr[0] = minHeap->arr[minHeap->curr_size - 1];
	--(minHeap->curr_size);
	minHeapify(minHeap, 0);
	return temp;
}


// A standard funvtion to build min heap
void buildMinHeap(struct MinHeap* minHeap)
{
	int n = minHeap->curr_size - 1;
	int i;
	for (i = (n - 1)/2; i >= 0; --i)
		minHeapify(minHeap, i);
}

// Creates a min heap of capacity equal to size and inserts all character of
// data[] in min heap. Initially size of min heap is equal to capacity
struct MinHeap* createAndBuildMinHeap(int data[], int size1)
{
	struct MinHeap* minHeap = createMinHeap(size1);
	for (int i = 0; i < size1; ++i)
		minHeap->arr[i] = newNode(data[i]);
	minHeap->curr_size = size1;
	buildMinHeap(minHeap);
	return minHeap;
}

// A utility function to check if size of heap is 1 or not
bool isSizeOne(struct MinHeap* minHeap)
{
	return (minHeap->curr_size == 1);
}


// The main function that builds Huffman tree
struct MinHeapNode* buildHuffmanTree(int data[], int size1)
{
	struct MinHeapNode *left, *right, *top;
	// Step 1: Create a min heap of capacity equal to size. Initially, there are
	// modes equal to size.
	struct MinHeap* minHeap = createAndBuildMinHeap(data, size1);
	// Iterate while size of heap doesn't become 1
	while (!isSizeOne(minHeap))
	{
		// Step 2: Extract the two minimum freq items from min heap
		left = extractMin(minHeap);
		right = extractMin(minHeap);
		// Step 3: Create a new internal node with frequency equal to the
		// sum of the two nodes frequencies. Make the two extracted node as
		// left and right children of this new node. Add this node to the min heap
		// '$' is a special value for internal nodes, not used
		top = newNode(left->data + right->data);
		top->left = left;
		top->right = right;
		insertMinHeap(minHeap, top);
	}
	// Step 4: The remaining node is the root node and the tree is complete.
	return extractMin(minHeap);
}

void postOrderTraversal(struct MinHeapNode* root){
    if(!root)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    if(root->left && root->right)
        printf("%d ",root->data);
}

// The main function that builds a Huffman Tree and print codes by traversing
// the built Huffman Tree
void HuffmanCodes(int data[], int size1)
{
    // Construct Huffman Tree
    struct MinHeapNode* root = buildHuffmanTree(data,size1);

    // Print Huffman codes using the Huffman tree built above
    postOrderTraversal(root);
}


// Driver program to test above functions
int main()
{
	int arr[] = {2,3,4,6};
	int size1 = sizeof(arr)/sizeof(arr[0]);
	HuffmanCodes(arr,size1);
	return 0;
}
