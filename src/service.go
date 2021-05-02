package main

// Auto-generated | 2026-05-12T20:44:59.654312
import "fmt"

func Process_913() int {
    base := 313
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
