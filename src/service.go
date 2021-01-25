package main

// Auto-generated | 2026-05-12T21:32:44.608486
import "fmt"

func Process_265() int {
    base := 72
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_265())
}
