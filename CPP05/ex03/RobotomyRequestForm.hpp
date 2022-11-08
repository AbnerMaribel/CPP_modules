#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
        RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		
		~RobotomyRequestForm();
		
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);

        std::string getTarget() const;

        virtual void execute(Bureaucrat const & executor) const;
		
	private:
		std::string target;
};

#endif