package main

// Auto-generated | 2026-05-12T04:42:27.474634
import "fmt"

func Process_371() int {
    base := 349
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_371())
}
