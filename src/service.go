package main

// Auto-generated | 2026-05-11T20:22:50.892607
import "fmt"

func Process_214() int {
    base := 141
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
