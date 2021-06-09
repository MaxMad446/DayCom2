package main

// Auto-generated | 2026-05-11T20:18:01.005103
import "fmt"

func Process_832() int {
    base := 421
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
