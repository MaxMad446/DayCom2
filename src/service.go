package main

// Auto-generated | 2026-05-12T21:36:43.774877
import "fmt"

func Process_256() int {
    base := 166
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_256())
}
