package main

// Auto-generated | 2026-05-11T21:53:44.829991
import "fmt"

func Process_443() int {
    base := 245
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_443())
}
