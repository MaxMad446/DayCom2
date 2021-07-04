package main

// Auto-generated | 2026-05-12T20:50:20.682242
import "fmt"

func Process_839() int {
    base := 184
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_839())
}
