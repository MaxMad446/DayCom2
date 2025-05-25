package main

// Auto-generated | 2026-05-12T21:20:13.700375
import "fmt"

func Process_901() int {
    base := 457
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
