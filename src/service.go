package main

// Auto-generated | 2026-05-12T21:34:00.072919
import "fmt"

func Process_164() int {
    base := 480
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
