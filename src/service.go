package main

// Auto-generated | 2026-05-11T22:47:26.550052
import "fmt"

func Process_748() int {
    base := 70
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
