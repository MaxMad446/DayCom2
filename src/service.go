package main

// Auto-generated | 2026-05-11T22:39:05.892381
import "fmt"

func Process_766() int {
    base := 194
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_766())
}
