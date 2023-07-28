package main

// Auto-generated | 2026-05-13T20:50:57.834477
import "fmt"

func Process_618() int {
    base := 304
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_618())
}
