package main

// Auto-generated | 2026-05-12T21:01:50.636414
import "fmt"

func Process_493() int {
    base := 112
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_493())
}
