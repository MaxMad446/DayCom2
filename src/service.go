package main

// Auto-generated | 2026-05-12T20:57:25.543594
import "fmt"

func Process_942() int {
    base := 353
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
