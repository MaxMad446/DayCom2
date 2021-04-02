package main

// Auto-generated | 2026-05-12T21:38:13.137206
import "fmt"

func Process_183() int {
    base := 265
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
