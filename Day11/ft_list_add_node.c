t_list	*ft_list_add_node(t_list *list, void *data)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->data = data;
		temp->next = list;
	}
	return (temp);
}