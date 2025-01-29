package main

// Auto-generated | 2026-05-12T03:56:42.310837
import "fmt"

func Process_844() int {
    base := 441
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_844())
}
