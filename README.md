# cpp-grade-management
simple grade management system made in c++ for learning purposes 

## Chat-GPT roadmap

#### 1. **Define the Project Requirements**

- **Functional Requirements**:
  - [ ] Add a new student.
  - [ ] View a list of all students.
  - [ ] Add grades to a student's file.
  - [ ] Calculate the average grade for a student.
  - [ ] Display student information and grades.

- **Non-Functional Requirements**:
  - Use file I/O for data persistence.
  - Ensure data integrity and error handling.
  - Implement a simple command-line interface for interaction.

#### 2. **Design the System**

- **Data Structure**:
  - Create a `Student` class with attributes like `name`, `studentID`, and `grades`.
  - Use files to store each student's information. The filename can be based on the `studentID`.

- **File Structure**:
  - Each student's data is stored in a separate text file named with their `studentID`.
  - Format for each student's file:
    ```plaintext
    Name: John Doe
    StudentID: 12345
    Grades: 90 85 92
    ```

- **Main Menu**:
  - A command-line interface with options:
    1. Add a new student.
    2. View all students.
    3. Add grades to a student.
    4. Calculate average grade for a student.
    5. Display student information.
    6. Exit.

#### 3. **Set Up the Development Environment**

- Ensure you have a C++ compiler installed (e.g., `g++`).
- Choose an IDE or text editor (e.g., VS Code, CLion).
- Create a project directory structure:
  - `src/` for source files.
  - `include/` for header files.
  - `data/` for storing student files.

#### 4. **Implement the Student Class**

- Define the `Student` class in a header file (`Student.h`).
- Implement methods for reading from and writing to files, adding grades, and calculating the average grade in a source file (`Student.cpp`).

#### 5. **Implement the Main Program Logic**

- Create the main program file (`main.cpp`).
- Implement the command-line interface to interact with the user.
- Use functions to handle each menu option:
  - `addStudent()`
  - `viewAllStudents()`
  - `addGrades()`
  - `calculateAverageGrade()`
  - `displayStudentInfo()`

#### 6. **Handle File I/O Operations**

- Implement functions to read and write student data to files.
- Ensure proper error handling for file operations (e.g., file not found, read/write errors).

#### 7. **Test the System**

- Create test cases to verify each functionality.
- Test adding new students, viewing the list of students, adding grades, calculating average grades, and displaying student information.

#### 8. **Debug and Refine**

- Debug any issues found during testing.
- Refactor code for better readability and maintainability.
- Add comments and documentation.

#### 9. **Add Additional Features (Optional)**

- Implement search functionality to find students by name or ID.
- Add data validation (e.g., check for valid grade inputs).
- Enhance the user interface with better formatting and error messages.

#### 10. **Deploy and Maintain**

- Ensure the project is well-documented.
- Package the project for distribution if necessary.
- Plan for future maintenance and updates.

By following this roadmap, you'll be able to systematically develop a Student Grade Management System in C++ that meets the specified requirements.
