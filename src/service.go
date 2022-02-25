package main

// Auto-generated | 2026-05-13T22:05:09.719224
import "fmt"

func Process_723() int {
    base := 399
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
