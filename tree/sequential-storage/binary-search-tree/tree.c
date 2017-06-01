#include <stdio.h>
#define MAX_TREE_SIZE 10

typedef int element_type_t;

/*
 *       A
 *      / \
 *     B   C
 *    /     \
 *   D       E
 *
 * data storage map:
 * [A][B][C][D][E]
 */
element_type_t complete_binary_tree[MAX_TREE_SIZE];

/*
 *       A
 *      / \
 *     B   C
 *          \
 *           D
 *
 * data storage map:
 * [A][B][C][^][D]
 */
element_type_t tree[MAX_TREE_SIZE];
