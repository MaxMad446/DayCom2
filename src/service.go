package main

// Auto-generated | 2026-05-11T20:56:51.448660
import "fmt"

func Process_153() int {
    base := 446
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_153())
}
