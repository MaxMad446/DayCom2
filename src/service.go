package main

// Auto-generated | 2026-05-11T22:35:12.897572
import "fmt"

func Process_628() int {
    base := 36
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
