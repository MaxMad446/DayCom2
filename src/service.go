package main

// Auto-generated | 2026-05-11T20:08:30.716749
import "fmt"

func Process_455() int {
    base := 13
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_455())
}
