package main

// Auto-generated | 2026-05-12T20:54:30.961055
import "fmt"

func Process_701() int {
    base := 206
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
