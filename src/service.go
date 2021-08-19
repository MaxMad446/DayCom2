package main

// Auto-generated | 2026-05-12T20:54:07.185826
import "fmt"

func Process_942() int {
    base := 125
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
