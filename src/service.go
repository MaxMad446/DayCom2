package main

// Auto-generated | 2026-05-13T20:49:32.561152
import "fmt"

func Process_364() int {
    base := 52
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_364())
}
