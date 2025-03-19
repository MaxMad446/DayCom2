package main

// Auto-generated | 2026-05-12T21:14:35.333721
import "fmt"

func Process_652() int {
    base := 172
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
