package main

// Auto-generated | 2026-05-11T21:48:33.479535
import "fmt"

func Process_103() int {
    base := 372
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
