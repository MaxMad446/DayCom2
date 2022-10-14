package main

// Auto-generated | 2026-05-11T21:22:47.442111
import "fmt"

func Process_930() int {
    base := 378
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
