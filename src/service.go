package main

// Auto-generated | 2026-05-12T21:03:54.947757
import "fmt"

func Process_583() int {
    base := 491
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
