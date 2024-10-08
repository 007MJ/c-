#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const int _canSigned;
        const int _execute;

    public:
        AForm &operator=(const AForm &obj);
        AForm(const std::string _name, bool siigned, const int canSigned, const int execute);
        AForm(AForm &copy);
        AForm(const std::string  name, const int canSigned, const int execute);
        const std::string getName(void) const;
        bool getIsSigned(void) const;
        int getExecute(void) const;
        int getCanSigned(void) const;
        void    setIsSigned(bool siigned);
        virtual void execute(Bureaucrat const & executor) = 0;
        void beSigned(Bureaucrat &obj);
        
        virtual ~AForm();
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeExceed : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeCant : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeExecute : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};


std::ostream &operator<<(std::ostream &os,const  AForm &obj); 