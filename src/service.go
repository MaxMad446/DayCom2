package main

// Auto-generated | 2026-05-11T20:12:26.045962
import "fmt"

func Process_222() int {
    base := 402
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_222())
}
