package main

import (
	"testing"
)

func TestAddition(t *testing.T) {
	result := addition(5, 3)
	if result != 8 {
		t.Errorf("Expected 8, but got %d", result)
	}
}

func TestMultiplication(t *testing.T) {
	result := multiplication(5, 3)
	if result != 15 {
		t.Errorf("Expected 15, but got %d", result)
	}
}

func TestDivision(t *testing.T) {
	result := division(10, 2)
	if result != 5 {
		t.Errorf("Expected 5, but got %d", result)
	}
}

func TestAdditionNegativeNumbers(t *testing.T) {
	result := addition(-5, -3)
	if result != -8 {
		t.Errorf("Expected -8, but got %d", result)
	}
}

func TestSubtractionNegativeNumbers(t *testing.T) {
	result := subtraction(-5, -3)
	if result != -2 {
		t.Errorf("Expected -2, but got %d", result)
	}
}

func TestMultiplicationZero(t *testing.T) {
	result := multiplication(5, 0)
	if result != 0 {
		t.Errorf("Expected 0, but got %d", result)
	}
}

func TestDivisionByZero(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("Expected division by zero to panic, but it didn't")
		}
	}()

	division(10, 0)
}