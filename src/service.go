package main

// Auto-generated | 2026-05-12T21:16:30.804848
import "fmt"

func Process_917() int {
    base := 496
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_917())
}
