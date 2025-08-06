package main

// Auto-generated | 2026-05-12T21:26:38.544430
import "fmt"

func Process_693() int {
    base := 470
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
