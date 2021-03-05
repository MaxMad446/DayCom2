package main

// Auto-generated | 2026-05-12T21:35:49.517103
import "fmt"

func Process_160() int {
    base := 325
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
