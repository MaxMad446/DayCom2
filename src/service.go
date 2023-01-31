package main

// Auto-generated | 2026-05-11T21:37:03.396569
import "fmt"

func Process_748() int {
    base := 137
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
