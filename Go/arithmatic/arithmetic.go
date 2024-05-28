package main
import "fmt"

func addition(num1,num2 int) int {
	return num1+num2;
}
func subtraction(num1, num2 int) int {
	return num1 - num2
}

func multiplication(num1, num2 int) int {
	return num1 * num2
}

func division(num1, num2 int) int {
	return num1 / num2
}
func main()  {
	fmt.Println("Enter two numbers separated by space: ")
	var n1, n2 int
	fmt.Scanln(&n1, &n2)

	fmt.Println("Enter choose your operation: ")
	fmt.Println("Option \t\t\t\t Choice")
	fmt.Println("Addition \t\t\t A")
	fmt.Println("Substraction \t\t\t S")
	fmt.Println("Multiplication \t\t\t M")
	fmt.Println("Division \t\t\t D")

	var ch rune	//Go uses the rune data type to represent a single Unicode character
	fmt.Scanf("%c", &ch)
	switch ch {
	case 'A', 'a':
		add := addition(n1, n2)
		fmt.Printf("Addition of %d and %d is %d\n", n1, n2, add)
	case 'S', 's':
		sub := subtraction(n1, n2)
		fmt.Printf("Subtraction of %d and %d is %d\n", n1, n2, sub)
	case 'M', 'm':
		mul := multiplication(n1, n2)
		fmt.Printf("Multiplication of %d and %d is %d\n", n1, n2, mul)
	case 'D', 'd':
		div := division(n1, n2)
		fmt.Printf("Division of %d and %d is %d\n", n1, n2, div)
	default:
		fmt.Println("Invalid choice")
	}
		
}
