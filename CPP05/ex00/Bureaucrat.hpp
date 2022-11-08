#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	public:
        Bureaucrat(const std::string & name, int grade);
        Bureaucrat(const Bureaucrat &copy);

		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat &assign);

        std::string getName();
        int getGrade();
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
		
	private:
        Bureaucrat();
        const std::string name;
        int grade;
};

std::ostream  & operator<<(std::ostream & outputStream, Bureaucrat & output);

#endif