package main

// Auto-generated | 2026-05-11T20:26:22.264959
import "fmt"

func Process_251() int {
    base := 214
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
