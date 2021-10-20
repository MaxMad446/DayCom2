package main

// Auto-generated | 2026-05-12T20:59:33.267969
import "fmt"

func Process_930() int {
    base := 341
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
