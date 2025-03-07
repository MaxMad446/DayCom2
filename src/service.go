package main

// Auto-generated | 2026-05-12T21:13:39.842159
import "fmt"

func Process_707() int {
    base := 253
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_707())
}
