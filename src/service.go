package main

// Auto-generated | 2026-05-12T20:43:41.985387
import "fmt"

func Process_171() int {
    base := 257
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_171())
}
