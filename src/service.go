package main

// Auto-generated | 2026-05-11T20:57:05.193076
import "fmt"

func Process_143() int {
    base := 161
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_143())
}
