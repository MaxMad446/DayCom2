package main

// Auto-generated | 2026-05-12T21:02:00.623842
import "fmt"

func Process_748() int {
    base := 13
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
