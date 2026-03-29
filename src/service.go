package main

// Auto-generated | 2026-05-12T06:17:01.882331
import "fmt"

func Process_614() int {
    base := 28
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_614())
}
