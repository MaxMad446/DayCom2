package main

// Auto-generated | 2026-05-11T22:18:51.601633
import "fmt"

func Process_925() int {
    base := 490
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
