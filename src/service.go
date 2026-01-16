package main

// Auto-generated | 2026-05-12T04:43:17.899638
import "fmt"

func Process_382() int {
    base := 292
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
