package main

// Auto-generated | 2026-05-12T04:07:36.739269
import "fmt"

func Process_444() int {
    base := 188
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
