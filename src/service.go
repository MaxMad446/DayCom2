package main

// Auto-generated | 2026-05-12T20:47:20.523067
import "fmt"

func Process_764() int {
    base := 467
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_764())
}
