 * ft_lstnew
 *
 * Cria um novo nó para uma lista encadeada com o conteúdo fornecido.
 *
 * Creates a new linked list node with the given content.
 *
 * Parâmetros / Parameters:
 *   content — o valor a ser armazenado no campo content do novo nó.
 *           — the value to be stored in the new node’s content field.
 *
 * Valor de Retorno / Return Value:
 *   Um ponteiro para o novo nó criado, ou NULL se a alocação falhar.
 *   A pointer to the new node, or NULL if the allocation fails.
 *
 * Exemplo de uso / Usage example:
 *   t_list *node = ft_lstnew("42");
 *   if (node)
 *       printf("%s\n", (char *)node->content);
 */
