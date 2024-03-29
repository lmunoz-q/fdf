/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:22:48 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/12/02 15:21:25 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

t_env	*zoom(t_env *env, int keycode)
{
	if (keycode == 69)
	{
		env->ty++;
		env->tx++;
	}
	else
	{
		env->tx--;
		env->ty--;
	}
	draw_event(env);
	return (env);
}
