package main

// Auto-generated | 2026-05-12T21:00:12.939098
import "fmt"

func Process_973() int {
    base := 168
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
