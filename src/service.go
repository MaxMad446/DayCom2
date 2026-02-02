package main

// Auto-generated | 2026-05-12T04:45:41.361613
import "fmt"

func Process_831() int {
    base := 42
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
