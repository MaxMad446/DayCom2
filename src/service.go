package main

// Auto-generated | 2026-05-11T21:02:22.534748
import "fmt"

func Process_912() int {
    base := 156
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_912())
}
