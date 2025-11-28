🏋️ GYM MANAGEMENT SYSTEM (C Programming)

📄 ABSTRACT
The Gym Management System is a terminal-based application written in C that helps manage gym member registrations and membership plans efficiently.

It provides essential capabilities such as adding, viewing, searching, updating, and deleting member records.

All data is stored persistently in a binary file (gym.txt) ensuring records remain saved across program executions.

This project demonstrates fundamental C programming concepts such as structures, file handling, control flow, loops, and modular program design. It is ideal for beginners, academic coursework, and hands-on learning.

✨ FEATURES

Core Functionalities

➕ Add new gym member records (Member ID, Name, Age, Membership Plan, Contact No)
📋 Display all member details in a formatted table
🔍 Search member by Member ID
✏️ Update member information
❌ Delete member records
💾 Persistent data storage using binary file gym.txt
🖥️ Fully terminal-based, menu-driven interface
👨‍💻 Beginner-friendly modular C code
⚙️ Auto-creates data file if missing
⚠️ Includes basic input validation & error messages

🛠️ TECHNICAL REQUIREMENTS

System Requirements

Operating System: Windows / Linux / macOS

Terminal or Command Prompt

Minimum 4 MB RAM

Small disk space for gym.txt

Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

IDE/Editor: VS Code, Code::Blocks, Dev-C++, etc.

Optional: Make utility

Programming Requirements

Language: C

Standards Supported: C89 / C99 / C11

Required header files:

stdio.h

stdlib.h

string.h

File Handling

Requires Read/Write permissions

Records stored in binary format (gym.txt)

Auto-creates file if missing

📌 FUNCTIONAL REQUIREMENTS

User Interface

Clean, menu-driven CLI

Validates user input

Displays appropriate success or error messages

🏋️‍♂️ GYM MEMBER OPERATIONS

➕ Add Member

Enter Member ID, Name, Age, Plan, Contact Number

Saved in gym.txt

📋 Display Members

Shows all gym member records in a neat tabular format

🔍 Search Member

Search using Member ID (unique)

✏️ Update Member

Modify Name, Age, Membership Plan, Contact, etc.

❌ Delete Member

Permanently delete a record using temporary file replacement method

🔧 DATA MANAGEMENT

Records stored in binary form → efficient access

Safe update & deletion methods

Handles empty or missing files smoothly

🔄 PROGRAM FLOW

Menu displayed in a continuous loop

Exit option to terminate

Clear confirmations after every operation

▶️ Running the Program

1️⃣ Compile
gcc gym.c -o gym

2️⃣ Run

Linux / macOS

./gym


Windows

gym.exe

3️⃣ Data File

Automatically creates gym.txt

Stores all member details in binary form

📸 Screenshots (Optional)

Main menu
<img width="397" height="126" alt="Screenshot 2025-11-28 103704" src="https://github.com/user-attachments/assets/6cb4f080-83b8-4d57-8325-abffb6f6a6fc" />


Add member
<img width="321" height="106" alt="Screenshot 2025-11-28 103712" src="https://github.com/user-attachments/assets/3c9d968c-7f9a-4aff-b3bc-8ccf9801134d" />


view all members
<img width="303" height="102" alt="Screenshot 2025-11-28 103719" src="https://github.com/user-attachments/assets/a744c9af-74f7-46c0-bb92-6577ac254122" />


Search member
<img width="283" height="102" alt="Screenshot 2025-11-28 103744" src="https://github.com/user-attachments/assets/d14de992-f3dc-4a03-9f74-ec4e28cb9898" />


Exit
<img width="192" height="57" alt="Screenshot 2025-11-28 103754" src="https://github.com/user-attachments/assets/8bc3a702-e132-4b5e-86ef-65c4391d34fb" />


📝 Author

E.Yeswanth choudhary.
