package main

// Auto-generated | 2026-05-12T06:19:22.886495
import "fmt"

func Process_575() int {
    base := 241
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_575())
}
