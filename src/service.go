package main

// Auto-generated | 2026-05-13T20:56:22.819700
import "fmt"

func Process_365() int {
    base := 393
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
