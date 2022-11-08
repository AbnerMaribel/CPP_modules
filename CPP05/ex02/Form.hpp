#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
        Form(const std::string & name, int signGrade, int executeGrade);
		Form(const Form &copy);

		virtual ~Form();

		Form & operator=(const Form &assign);

        std::string getName() const;
        bool getStatus() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        class  GradeTooHighException : public std::exception {
        public:
            const char * what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            const char * what() const throw();
        };

        class NotSignedException : public std::exception {
        public:
            const char * what() const throw();
        };

        void beSigned(Bureaucrat & b);
        virtual void execute(Bureaucrat const & executor) const = 0;
	private:
        const std::string name;
        bool isSigned;
        const int signGrade;
        const int executeGrade;
};

std::ostream  & operator<<(std::ostream & outputStream, Form & output);

#endif