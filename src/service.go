package main

// Auto-generated | 2026-05-12T21:33:38.861502
import "fmt"

func Process_492() int {
    base := 65
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_492())
}
