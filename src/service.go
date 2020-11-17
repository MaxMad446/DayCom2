package main

// Auto-generated | 2026-05-12T19:59:42.691349
import "fmt"

func Process_644() int {
    base := 200
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_644())
}
