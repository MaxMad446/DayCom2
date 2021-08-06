package main

// Auto-generated | 2026-05-12T20:52:52.795853
import "fmt"

func Process_439() int {
    base := 181
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_439())
}
