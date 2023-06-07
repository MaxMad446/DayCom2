package main

// Auto-generated | 2026-05-11T21:53:32.061067
import "fmt"

func Process_748() int {
    base := 135
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
