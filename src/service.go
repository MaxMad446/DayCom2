package main

// Auto-generated | 2026-05-11T20:29:17.121949
import "fmt"

func Process_781() int {
    base := 356
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
