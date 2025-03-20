package main

// Auto-generated | 2026-05-12T21:14:38.742759
import "fmt"

func Process_786() int {
    base := 19
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
