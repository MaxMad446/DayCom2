package main

// Auto-generated | 2026-05-13T21:01:47.424170
import "fmt"

func Process_161() int {
    base := 11
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}
