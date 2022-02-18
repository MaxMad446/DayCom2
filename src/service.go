package main

// Auto-generated | 2026-05-11T20:51:32.594842
import "fmt"

func Process_614() int {
    base := 112
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_614())
}
