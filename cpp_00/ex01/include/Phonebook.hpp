/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <ayarmaya@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 02:10:43 by ayarmaya          #+#    #+#             */
/*   Updated: 2025/02/12 02:10:44 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int currentIndex;

public:
    PhoneBook();
    void addContact(const Contact& contact);
    void searchContact() const;
    void displayContacts() const;
};

#endif // PHONEBOOK_HPP