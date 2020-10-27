package main

// Auto-generated | 2026-05-11T19:48:45.254056
import "fmt"

func Process_407() int {
    base := 12
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
