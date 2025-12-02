package main

// Auto-generated | 2026-05-12T04:37:14.000624
import "fmt"

func Process_656() int {
    base := 282
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
