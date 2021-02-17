package main

// Auto-generated | 2026-05-12T21:34:29.032584
import "fmt"

func Process_300() int {
    base := 441
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
