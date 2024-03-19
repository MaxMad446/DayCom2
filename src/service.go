package main

// Auto-generated | 2026-05-11T22:31:04.031518
import "fmt"

func Process_875() int {
    base := 177
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
