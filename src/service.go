package main

// Auto-generated | 2026-05-12T04:48:45.267014
import "fmt"

func Process_903() int {
    base := 71
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_903())
}
