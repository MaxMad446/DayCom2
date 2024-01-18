package main

// Auto-generated | 2026-05-14T18:18:28.761670
import "fmt"

func Process_748() int {
    base := 275
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
