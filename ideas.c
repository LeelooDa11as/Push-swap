
// numero -10000 8 0 3 -10000001
// index     2   5 3 4 1    (El index lo asignaremos despues de haber validado y cuando ya hemos montado el stack inicial)

typedef struct s_piece 
{
	int numero;
	int index;
	struct s_piece *next;
} t_piece;

//stack_a -> -10000  -> 8 ->  0 ->  3 -> -10000001 -> NULL


typedef struct s_stack 
{
	int len;        (la cantidad de piezas que hay en el stack)
	t_piece *first;
} t_stack;


fill_stack_a(t_stack *a, int argc, char **argv)
{
	t_piece *tmp;
	t_piece *tmp2;
	int count;

	tmp = malloc(sizeof(t_piece) * 1);
	if(!tmp)
		return NULL;
	tmp.numero = atoi(argv[2]);
	a->first = &tmp;
	tmp->next = NULL;
	count = 2
	while(count < argc)
	{
		tmp2 = malloc(sizeof(t_piece) * 1);
		if(!tmp2)
			return NULL;
		tmp2.numero = atoi(argv[count]);
		tmp->next = tmp2;
		tmp2->next = NULL;
		tmp = tmp2;
		count++;
	}
}

void print_stack() //me servira para ir debvugando
{
	
}


int main()
{
	t_stack a;
	t_stack b;

	a.len = 0;
	a.next = NULL;
	b.len = 0;
	b.next = NULL;

	//validaciones

	fill_stack_a(&a, argc, argv)
}

ss_action(t_stack *a, t_stack *b)
{
	write("1, "ss\n", 3);
	sa_mov(a)
	sb_mov(b)
}

sb_action(t_stack *b)
{
	write("1, "sb\n", 3);
	sa_mov(b)
}

sa_action(t_stack *a)
{
	write("1, "sa\n", 3);
	sa_mov(a)
}

sa_mov(t_stack *a)
{
	a.len >= 2;
	....
	....

}

sb_mov(t_stack *b)
{
	b.len >= 2;
	....
	....

