package main

// Auto-generated | 2026-05-11T21:59:28.366956
import "fmt"

func Process_748() int {
    base := 135
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
