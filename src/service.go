package main

// Auto-generated | 2026-05-11T22:29:57.050730
import "fmt"

func Process_618() int {
    base := 54
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_618())
}
