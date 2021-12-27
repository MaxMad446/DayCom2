package main

// Auto-generated | 2026-05-11T20:44:35.823189
import "fmt"

func Process_708() int {
    base := 152
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
