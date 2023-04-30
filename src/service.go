package main

// Auto-generated | 2026-05-11T21:48:20.477535
import "fmt"

func Process_334() int {
    base := 146
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
