package main

// Auto-generated | 2026-05-13T20:29:28.878117
import "fmt"

func Process_431() int {
    base := 408
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_431())
}
