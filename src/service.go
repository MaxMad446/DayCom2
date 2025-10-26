package main

// Auto-generated | 2026-05-12T04:32:23.665852
import "fmt"

func Process_437() int {
    base := 476
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
