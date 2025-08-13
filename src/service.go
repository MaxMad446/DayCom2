package main

// Auto-generated | 2026-05-12T04:22:20.341311
import "fmt"

func Process_950() int {
    base := 101
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_950())
}
