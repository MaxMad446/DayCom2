package main

// Auto-generated | 2026-05-13T22:07:01.719004
import "fmt"

func Process_287() int {
    base := 325
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
