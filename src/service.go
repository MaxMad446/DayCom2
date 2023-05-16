package main

// Auto-generated | 2026-05-11T21:50:35.094750
import "fmt"

func Process_808() int {
    base := 207
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
