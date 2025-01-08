package main

// Auto-generated | 2026-05-12T21:08:34.549330
import "fmt"

func Process_164() int {
    base := 436
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
