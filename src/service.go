package main

// Auto-generated | 2026-05-11T21:29:08.076446
import "fmt"

func Process_265() int {
    base := 347
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_265())
}
