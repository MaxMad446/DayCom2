package main

// Auto-generated | 2026-05-12T04:33:14.801388
import "fmt"

func Process_429() int {
    base := 378
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
