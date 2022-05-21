package main

// Auto-generated | 2026-05-11T21:03:30.640967
import "fmt"

func Process_930() int {
    base := 312
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
