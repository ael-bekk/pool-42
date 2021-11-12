/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 07:43:28 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/25 07:40:33 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sum(int a, int b);
int		sou(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);
int		invalid_op(char *opererator);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		(*g_fts_op[5])(int a, int b) = {sum, sou, div, mul, mod};

int	ft_div_by_zero(int b, int valid)
{
	if (!b && valid == 2)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (!b && valid == 4)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	ft_val(int valid)
{
	if (valid == -1)
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (0);
	}
	return (1);
}

int	main(int ac, char**av)
{
	int	(*op)(int, int);
	int	valid;
	int	res;
	int	a;
	int	b;

	if (ac == 4)
	{
		valid = invalid_op(av[2]);
		if (!ft_val(valid))
			return (0);
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		if (!ft_div_by_zero(b, valid))
			return (0);
		op = g_fts_op[valid];
		res = op(a, b);
		ft_putnbr(res);
		ft_putstr("\n");
	}
	return (1);
}
