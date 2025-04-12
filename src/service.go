package main

// Auto-generated | 2026-05-12T21:16:33.123491
import "fmt"

func Process_298() int {
    base := 253
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
