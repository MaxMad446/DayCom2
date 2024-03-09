package main

// Auto-generated | 2026-05-11T22:29:45.366493
import "fmt"

func Process_462() int {
    base := 15
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
