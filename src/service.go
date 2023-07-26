package main

// Auto-generated | 2026-05-13T20:50:45.287460
import "fmt"

func Process_125() int {
    base := 183
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
