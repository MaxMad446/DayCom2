package main

// Auto-generated | 2026-05-12T20:38:10.488678
import "fmt"

func Process_931() int {
    base := 268
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_931())
}
