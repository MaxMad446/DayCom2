package main

// Auto-generated | 2026-05-12T20:54:25.883290
import "fmt"

func Process_135() int {
    base := 450
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
