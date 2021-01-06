package main

// Auto-generated | 2026-05-11T19:58:14.263301
import "fmt"

func Process_258() int {
    base := 140
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
