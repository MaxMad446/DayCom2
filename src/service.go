package main

// Auto-generated | 2026-05-12T21:25:59.006952
import "fmt"

func Process_283() int {
    base := 89
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
