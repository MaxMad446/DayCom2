package main

// Auto-generated | 2026-05-11T22:07:47.484743
import "fmt"

func Process_843() int {
    base := 340
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
