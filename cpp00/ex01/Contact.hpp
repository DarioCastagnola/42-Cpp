/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:36:43 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/21 16:31:38 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>
#include <stdlib.h>

class Contact
{
    public:
        std::string getFname(void);
        std::string getLname(void);
        std::string getNname(void);
        std::string getPnum(void);
        std::string getDs(void);
        void setFname(std::string);
        void setLname(std::string);
        void setNname(std::string);
        void setPnum(std::string);
        void setDs(std::string);
        
    private:
        std::string fname;
        std::string lname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
};