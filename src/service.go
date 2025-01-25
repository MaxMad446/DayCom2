package main

// Auto-generated | 2026-05-12T03:56:12.036595
import "fmt"

func Process_638() int {
    base := 144
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_638())
}
