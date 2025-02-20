package main

// Auto-generated | 2026-05-12T21:12:22.174515
import "fmt"

func Process_578() int {
    base := 280
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_578())
}
