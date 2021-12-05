package main

// Auto-generated | 2026-05-12T21:03:29.306076
import "fmt"

func Process_711() int {
    base := 365
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
