public class OuterClass {
    
    private int outerField;
    
    // Constructor for OuterClass
    public OuterClass(int value) {
        outerField = value;
    }
    
    // Method to display the value of outerField
    public void displayOuterField() {
        System.out.println("OuterField: " + outerField);
    }
    
    // Nested class within OuterClass
    public class InnerClass {
        
        private int innerField;
        
        // Constructor for InnerClass
        public InnerClass(int value) {
            innerField = value;
        }
        
        // Method to display the value of innerField
        public void displayInnerField() {
            System.out.println("InnerField: " + innerField);
        }
        
        // Method to access outerField from InnerClass
        public void accessOuterField() {
            System.out.println("Accessing outerField from InnerClass: " + outerField);
        }
    }
    
    // Main method to demonstrate nested class usage
    public static void main(String[] args) {
        // Create an instance of OuterClass
        OuterClass outerObj = new OuterClass(10);
        
        // Create an instance of InnerClass using outerObj
        OuterClass.InnerClass innerObj = outerObj.new InnerClass(20);
        
        // Display values of fields from both outerObj and innerObj
        outerObj.displayOuterField();
        innerObj.displayInnerField();
        
        // Access outerField from InnerClass
        innerObj.accessOuterField();
    }
}