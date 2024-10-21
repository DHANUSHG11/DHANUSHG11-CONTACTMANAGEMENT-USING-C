 Contact Management System in C

Overview

This Contact Management System is a simple program written in C that allows users to manage their contacts effectively.
The program supports adding new contacts, viewing existing contacts, and exiting the application. 
Each contact consists of a name, email address, and phone number.

## Features

- **Add Contact**: Users can add a new contact by providing a name, email address, and phone number.
- **View Contacts**: Users can view all stored contacts.
- **Exit**: Users can exit the program safely.
- **Data Structure**: Utilizes a structure to store contact information.
- **Limit**: Supports up to 100 contacts.

### Prerequisites
To compile and run this program, you need:
- A C compiler (e.g., GCC)

### Installation

1. Clone the repository to your local machine:
   ```bash

   
Compilation:
Compile the program using the following command:
gcc contact_management.c -o contact_management
Run the compiled executable:
./contact_management
Code Structure
The program consists of the following key components:

    Structures: Defines a Contacts structure that holds name, email, and phone number.
    Functions:
        add_contact(): Adds a new contact to the list.
        view_contact(): Displays all contacts stored in memory.
