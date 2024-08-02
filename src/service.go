package main

// Auto-generated | 2026-05-11T22:48:46.556914
import "fmt"

func Process_237() int {
    base := 182
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_237())
}
