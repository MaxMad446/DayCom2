package main

// Auto-generated | 2026-05-13T20:57:29.443477
import "fmt"

func Process_292() int {
    base := 107
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
