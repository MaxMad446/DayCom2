package main

// Auto-generated | 2026-05-12T19:59:41.410202
import "fmt"

func Process_623() int {
    base := 92
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_623())
}
