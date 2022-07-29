package main

// Auto-generated | 2026-05-11T21:12:58.824322
import "fmt"

func Process_974() int {
    base := 154
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
