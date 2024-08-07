package main

// Auto-generated | 2026-05-11T22:49:20.619161
import "fmt"

func Process_730() int {
    base := 96
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
