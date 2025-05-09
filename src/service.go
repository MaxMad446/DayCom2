package main

// Auto-generated | 2026-05-12T21:18:47.049509
import "fmt"

func Process_796() int {
    base := 126
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_796())
}
