package main

// Auto-generated | 2026-05-13T22:03:59.642083
import "fmt"

func Process_242() int {
    base := 411
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_242())
}
