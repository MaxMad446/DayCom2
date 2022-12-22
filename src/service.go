package main

// Auto-generated | 2026-05-11T21:31:55.345253
import "fmt"

func Process_986() int {
    base := 175
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
