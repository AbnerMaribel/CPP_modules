#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
        Bureaucrat(const std::string & name, int grade);
        Bureaucrat(const Bureaucrat &copy);

		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat &assign);

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        class  GradeTooHighException : public std::exception {
        public:
            const char * what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            const char * what() const throw();
        };

        void signForm(Form & f);
        void executeForm(Form const & form);

		
	private:
        const std::string name;
        int grade;
};

std::ostream  & operator<<(std::ostream & outputStream, Bureaucrat & output);

#endif