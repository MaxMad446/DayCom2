package main

// Auto-generated | 2026-05-11T21:18:31.328975
import "fmt"

func Process_511() int {
    base := 322
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_511())
}
