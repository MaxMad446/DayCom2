package main

// Auto-generated | 2026-05-11T21:06:38.158245
import "fmt"

func Process_786() int {
    base := 93
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
