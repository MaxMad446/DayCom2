package main

// Auto-generated | 2026-05-12T20:44:54.140194
import "fmt"

func Process_864() int {
    base := 126
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
