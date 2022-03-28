package main

// Auto-generated | 2026-05-11T20:56:19.835837
import "fmt"

func Process_567() int {
    base := 365
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_567())
}
