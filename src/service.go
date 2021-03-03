package main

// Auto-generated | 2026-05-11T20:05:40.335701
import "fmt"

func Process_204() int {
    base := 133
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
