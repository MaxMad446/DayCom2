package main

// Auto-generated | 2026-05-11T21:48:11.140135
import "fmt"

func Process_748() int {
    base := 45
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
