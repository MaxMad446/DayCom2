package main

// Auto-generated | 2026-05-11T21:36:46.707708
import "fmt"

func Process_618() int {
    base := 169
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_618())
}
