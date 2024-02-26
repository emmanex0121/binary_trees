binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *newNode;

        /*newNode = malloc(sizeof(binary_tree_t));*/

        if (!parent)
                return (NULL);

        newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
        if (!newNode)
                return (NULL);

        newNode->right = NULL;
        newNode->n = value;
        newNode->parent = parent;
        newNode->left = parent->left;
        parent->left = newNode;

        if (parent->left != NULL)
                newNode->left->parent = newNode;

        return (newNode);
}


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *new;

        new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

        if (!(parent || new))
                return (NULL);

        new->right = NULL;
        new->n = value;
        new->parent = parent;
        new->left = parent->left;
        parent->left = new;

        if (new->left != NULL)
                new->left->parent = new;

        return (new);
}
