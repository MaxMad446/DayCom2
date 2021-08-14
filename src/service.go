package main

// Auto-generated | 2026-05-12T20:53:38.038083
import "fmt"

func Process_805() int {
    base := 354
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
