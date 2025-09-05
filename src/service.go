package main

// Auto-generated | 2026-05-12T04:25:27.531205
import "fmt"

func Process_246() int {
    base := 238
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_246())
}
