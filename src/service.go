package main

// Auto-generated | 2026-05-11T22:07:26.951821
import "fmt"

func Process_457() int {
    base := 424
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_457())
}
