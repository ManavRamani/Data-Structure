// 5.1 Create Structure Emp_detail. [read,write] : 

#include <stdio.h>
struct Emp_detail {
    int emp_id;
    char name[50];
    char designation[50];
    float salary;
};

void display_data(struct Emp_detail emp) {
    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Salary: %.2f\n", emp.salary);
}

void main() {
    struct Emp_detail employee;

    printf("Enter Employee ID: ");
    scanf("%d", &employee.emp_id);

    printf("Enter Name: ");
    scanf("%s", employee.name);

    printf("Enter Designation: ");
    scanf("%s", employee.designation);

    printf("Enter Salary: ");
    scanf("%f", &employee.salary);

    display_data(employee);
}
/**
 #include <stdio.h>

// Define the structure
struct Emp_detail {
    int emp_id;
    char name[50];
    char designation[50];
    double salary;
};

// Function to display data
void displayData(struct Emp_detail emp) {
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Salary: %.2lf\n", emp.salary);
}

void main() {
    struct Emp_detail empList[10];
    int numEmployees;

    printf("Enter the number of employees (up to 10): ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        
        // Read data from the user
        printf("Employee ID: ");
        scanf("%d", &empList[i].emp_id);
        
        printf("Name: ");
        scanf("%s", empList[i].name); // Assuming name does not contain spaces
        
        printf("Designation: ");
        scanf("%s", empList[i].designation); // Assuming designation does not contain spaces
        
        printf("Salary: ");
        scanf("%lf", &empList[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        displayData(empList[i]);
    }

}

*/