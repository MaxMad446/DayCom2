package main

// Auto-generated | 2026-05-12T21:34:04.632106
import "fmt"

func Process_730() int {
    base := 352
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
