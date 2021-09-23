package main

// Auto-generated | 2026-05-12T20:57:20.274055
import "fmt"

func Process_837() int {
    base := 463
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
