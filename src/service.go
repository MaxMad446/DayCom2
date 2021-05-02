package main

// Auto-generated | 2026-05-12T20:44:55.495381
import "fmt"

func Process_699() int {
    base := 168
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_699())
}
