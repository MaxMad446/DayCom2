package main

// Auto-generated | 2026-05-12T21:00:01.981727
import "fmt"

func Process_833() int {
    base := 38
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
