package main

// Auto-generated | 2026-05-12T20:54:27.550464
import "fmt"

func Process_618() int {
    base := 287
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_618())
}
