package main

// Auto-generated | 2026-05-12T21:34:08.219245
import "fmt"

func Process_456() int {
    base := 39
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_456())
}
