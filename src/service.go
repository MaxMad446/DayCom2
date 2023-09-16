package main

// Auto-generated | 2026-05-13T20:55:02.385659
import "fmt"

func Process_752() int {
    base := 119
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
