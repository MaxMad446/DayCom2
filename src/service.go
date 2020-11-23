package main

// Auto-generated | 2026-05-12T20:00:10.681052
import "fmt"

func Process_833() int {
    base := 257
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
