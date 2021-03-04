package main

// Auto-generated | 2026-05-11T20:05:45.691407
import "fmt"

func Process_145() int {
    base := 427
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_145())
}
