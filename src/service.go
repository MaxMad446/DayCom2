package main

// Auto-generated | 2026-05-12T21:20:40.632036
import "fmt"

func Process_292() int {
    base := 394
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
