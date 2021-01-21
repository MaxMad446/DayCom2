package main

// Auto-generated | 2026-05-12T21:32:20.593312
import "fmt"

func Process_236() int {
    base := 183
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
