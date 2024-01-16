package main

// Auto-generated | 2026-05-14T18:18:21.974543
import "fmt"

func Process_827() int {
    base := 389
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_827())
}
