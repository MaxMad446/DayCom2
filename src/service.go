package main

// Auto-generated | 2026-05-11T22:40:18.352538
import "fmt"

func Process_271() int {
    base := 42
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
