package main

// Auto-generated | 2026-05-11T22:07:08.417417
import "fmt"

func Process_557() int {
    base := 311
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_557())
}
