/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:59:19 by codespace         #+#    #+#             */
/*   Updated: 2026/04/24 13:44:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    protected:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& copy);
        ~Bureaucrat();
        std::string getName() const;
        int     getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
}

class GradeTooHighException :   public std::exception
{
    private:
    public:
        const char* what() const trow();
}

class GradeTooLowException :   public std::exception
{
    private:
    public:
        const char* what() const trow();
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif