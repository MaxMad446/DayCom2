package main

// Auto-generated | 2026-05-12T04:25:38.250277
import "fmt"

func Process_934() int {
    base := 429
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_934())
}
