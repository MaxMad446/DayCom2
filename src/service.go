package main

// Auto-generated | 2026-05-12T21:33:12.618885
import "fmt"

func Process_508() int {
    base := 189
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
