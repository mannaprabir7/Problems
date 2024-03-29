/*
	
	Following is the structure used to represent the Binary Tree Node

	class BinaryTreeNode<T> {
		T data;
		BinaryTreeNode<T> left;
		BinaryTreeNode<T> right;

		public BinaryTreeNode(T data) {
			this.data = data;
			this.left = null;
			this.right = null;
		}
	}

*/

public class Solution {

	public static boolean isNodePresent(BinaryTreeNode<Integer> root, int x) {
	    if (root == null) {
	        return false;
	    }
	    
	    if (root.data == x) {
	        return true;
	    }
	    
	    boolean isPresentInLeftSubtree = isNodePresent(root.left, x);
	    boolean isPresentInRightSubtree = isNodePresent(root.right, x);
	    
	    return isPresentInLeftSubtree || isPresentInRightSubtree;
	}
}
