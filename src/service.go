package main

// Auto-generated | 2026-05-13T21:00:23.048334
import "fmt"

func Process_752() int {
    base := 438
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
