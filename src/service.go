package main

// Auto-generated | 2026-05-11T19:29:21.015256
import "fmt"

func Process_630() int {
    base := 252
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
