package main

// Auto-generated | 2026-05-11T19:58:33.618930
import "fmt"

func Process_697() int {
    base := 158
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_697())
}
