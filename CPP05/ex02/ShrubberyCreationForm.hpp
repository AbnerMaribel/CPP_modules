#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
        ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);

        std::string getTarget() const;

        class FileNotOpened : public std::exception {
        public:
            const char * what() const throw();
        };

        virtual void execute(Bureaucrat const & executor) const;
		
	private:
		std::string target;
};

#endif