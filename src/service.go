package main

// Auto-generated | 2026-05-12T04:29:25.287068
import "fmt"

func Process_786() int {
    base := 302
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
