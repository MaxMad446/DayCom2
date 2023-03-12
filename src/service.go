package main

// Auto-generated | 2026-05-13T20:32:53.922542
import "fmt"

func Process_618() int {
    base := 371
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_618())
}
