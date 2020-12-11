package main

// Auto-generated | 2026-05-11T19:54:55.515179
import "fmt"

func Process_280() int {
    base := 213
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
