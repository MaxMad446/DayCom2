package main

// Auto-generated | 2026-05-12T21:39:05.330083
import "fmt"

func Process_805() int {
    base := 146
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
