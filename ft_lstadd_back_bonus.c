#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current;
    if (lst == NULL || new == NULL)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    current = *lst;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = new;
}
// int main(void)
// {
//     t_list *head = NULL;

//     ft_lstadd_back(&head, ft_lstnew("cooding"));
//     ft_lstadd_back(&head, ft_lstnew("School"));
//     ft_lstadd_back(&head, ft_lstnew("1337"));
//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     current = head;
//     while (current != NULL)
//     {
//         t_list *next = current->next;
//         free(current);
//         current = next;
//     }
//     return 0;
// }