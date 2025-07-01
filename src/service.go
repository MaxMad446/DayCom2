package main

// Auto-generated | 2026-05-12T21:23:25.834150
import "fmt"

func Process_337() int {
    base := 313
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
