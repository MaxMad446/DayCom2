package main

// Auto-generated | 2026-05-12T04:07:55.543546
import "fmt"

func Process_307() int {
    base := 470
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
