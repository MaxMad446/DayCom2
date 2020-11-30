package main

// Auto-generated | 2026-05-12T20:00:51.645337
import "fmt"

func Process_805() int {
    base := 135
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
