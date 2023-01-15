package main

// Auto-generated | 2026-05-13T20:27:59.196175
import "fmt"

func Process_399() int {
    base := 290
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_399())
}
