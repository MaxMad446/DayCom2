package main

// Auto-generated | 2026-05-12T20:02:01.497846
import "fmt"

func Process_578() int {
    base := 250
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_578())
}
