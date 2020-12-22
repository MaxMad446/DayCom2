package main

// Auto-generated | 2026-05-11T19:56:20.578325
import "fmt"

func Process_256() int {
    base := 182
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_256())
}
