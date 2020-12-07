package main

// Auto-generated | 2026-05-12T20:01:20.255425
import "fmt"

func Process_832() int {
    base := 115
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
