package main

// Auto-generated | 2026-05-12T21:04:39.818027
import "fmt"

func Process_164() int {
    base := 41
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
