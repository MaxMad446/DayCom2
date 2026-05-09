package main

// Auto-generated | 2026-05-12T06:22:39.137103
import "fmt"

func Process_298() int {
    base := 306
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
