import java.util.*;
 class Employee {
    private double base;
    private double ta;
    private double dra;
    private String name;
    private int id;
    private double salary;
    Scanner sc = new Scanner(System.in);
    public Employee(){
        base=0;
        ta=0;
        dra=0;
        name="";
        id=0;
        salary=0;
    }
    public void registration(){
        System.out.print("Enter the Name of the Employee : ");
        name=sc.nextLine();
        System.out.print("Enter the ID of the Employee : ");
        id=sc.nextInt();
        System.out.print("Enter the Base Salary : ");
        base=sc.nextDouble();
        System.out.print("Enter the DA in % : ");
        dra=sc.nextDouble();
        System.out.print("Enter the TA in % : ");
        ta=sc.nextDouble();
    }
    public void calculateSalaryPerAnnum(){
        salary=(base+((dra/100)*base)+((ta/100)*base))*12;
    }
    public void printSalaryPerAnnum(){
        System.out.println("ID of Employee : "+id);
        System.out.println("Name of Employee : "+name);
        calculateSalaryPerAnnum();
        System.out.println("Salary per Annum of the Employee : Rs "+salary);
    }
    public static void main(String[] args) {
        Employee ob = new Employee();
        ob.registration();
        ob.printSalaryPerAnnum();
    }
}