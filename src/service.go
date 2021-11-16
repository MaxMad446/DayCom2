package main

// Auto-generated | 2026-05-11T20:39:14.293947
import "fmt"

func Process_925() int {
    base := 193
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
