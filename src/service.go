package main

// Auto-generated | 2026-05-12T20:49:26.063199
import "fmt"

func Process_414() int {
    base := 279
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
