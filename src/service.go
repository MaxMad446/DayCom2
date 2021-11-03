package main

// Auto-generated | 2026-05-11T20:37:21.693113
import "fmt"

func Process_453() int {
    base := 20
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_453())
}
