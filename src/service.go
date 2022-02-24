package main

// Auto-generated | 2026-05-11T20:52:15.722095
import "fmt"

func Process_275() int {
    base := 127
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
