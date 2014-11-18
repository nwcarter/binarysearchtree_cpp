#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

class BinarySearchTree
{
	private:
		BinarySearchTree* m_parent;
		BinarySearchTree* m_left;
		BinarySearchTree* m_right;
		int m_level;
		int m_value;
	public:
		//Constructor
		BinarySearchTree(int item);
		// immutable methods...
		BinarySearchTree* getParent();
		BinarySearchTree* getLeft();
		BinarySearchTree* getRight();
		int getItem();
		BinarySearchTree* search(int item);
		BinarySearchTree* min();
		BinarySearchTree* max();
		std::string toString();
		
		// traversal
		void inorder();
		void breadthFirstOrder();
		int getLevel();
		
		// mutable methods...
		bool insert(int item);
		bool deleteItem(int item);

	private:
		void setLeft(BinarySearchTree* tree);
		void setRight(BinarySearchTree* tree);
		void setParent(BinarySearchTree* tree);
		void setLevel(int level);
		void setItem(int item);
		bool _delete(BinarySearchTree* t);
		bool _insert(BinarySearchTree* p, int item); 
		BinarySearchTree* _search(BinarySearchTree* tree, int item); 
		void _inorder(BinarySearchTree* tree); 
		void _breadthFirstOrder(BinarySearchTree* tree);

};

#endif