package main

// Auto-generated | 2026-05-12T21:25:16.702042
import "fmt"

func Process_908() int {
    base := 194
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_908())
}
