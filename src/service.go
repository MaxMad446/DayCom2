package main

// Auto-generated | 2026-05-11T21:45:08.630820
import "fmt"

func Process_657() int {
    base := 284
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
