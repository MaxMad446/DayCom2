package main

// Auto-generated | 2026-05-13T20:34:28.499132
import "fmt"

func Process_441() int {
    base := 497
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_441())
}
