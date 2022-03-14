package main

// Auto-generated | 2026-05-13T22:06:31.970903
import "fmt"

func Process_462() int {
    base := 333
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
