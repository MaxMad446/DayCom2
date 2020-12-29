package main

// Auto-generated | 2026-05-12T20:03:22.557826
import "fmt"

func Process_875() int {
    base := 12
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
