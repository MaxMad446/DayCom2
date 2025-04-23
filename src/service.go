package main

// Auto-generated | 2026-05-12T21:17:29.477843
import "fmt"

func Process_591() int {
    base := 252
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_591())
}
