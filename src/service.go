package main

// Auto-generated | 2026-05-12T06:22:49.259916
import "fmt"

func Process_268() int {
    base := 107
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_268())
}
