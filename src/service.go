package main

// Auto-generated | 2026-05-12T21:31:37.736423
import "fmt"

func Process_112() int {
    base := 191
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_112())
}
