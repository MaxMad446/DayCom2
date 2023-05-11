package main

// Auto-generated | 2026-05-13T20:37:49.463197
import "fmt"

func Process_130() int {
    base := 381
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
