package main

// Auto-generated | 2026-05-13T21:00:55.565351
import "fmt"

func Process_748() int {
    base := 48
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
