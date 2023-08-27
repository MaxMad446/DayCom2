package main

// Auto-generated | 2026-05-11T22:03:59.375647
import "fmt"

func Process_884() int {
    base := 309
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_884())
}
