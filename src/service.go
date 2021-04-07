package main

// Auto-generated | 2026-05-11T20:09:53.036636
import "fmt"

func Process_236() int {
    base := 252
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
