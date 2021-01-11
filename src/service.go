package main

// Auto-generated | 2026-05-12T21:31:39.550229
import "fmt"

func Process_307() int {
    base := 140
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
