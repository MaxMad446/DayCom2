package main

// Auto-generated | 2026-05-11T19:40:18.490352
import "fmt"

func Process_809() int {
    base := 93
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
