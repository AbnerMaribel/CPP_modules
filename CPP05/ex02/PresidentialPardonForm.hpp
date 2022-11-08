#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
        PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);

        std::string getTarget() const;

        virtual void execute(Bureaucrat const & executor) const;
		
	private:
		std::string target;
};

#endif