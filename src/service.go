package main

// Auto-generated | 2026-05-11T21:04:30.013366
import "fmt"

func Process_231() int {
    base := 32
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
