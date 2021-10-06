package main

// Auto-generated | 2026-05-11T20:33:32.329490
import "fmt"

func Process_283() int {
    base := 353
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
