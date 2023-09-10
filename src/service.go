package main

// Auto-generated | 2026-05-11T22:05:54.928910
import "fmt"

func Process_201() int {
    base := 321
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
