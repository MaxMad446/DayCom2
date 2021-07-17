package main

// Auto-generated | 2026-05-11T20:23:09.328534
import "fmt"

func Process_875() int {
    base := 58
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
