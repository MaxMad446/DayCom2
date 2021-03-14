package main

// Auto-generated | 2026-05-12T21:36:31.928791
import "fmt"

func Process_576() int {
    base := 348
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
