package main

// Auto-generated | 2026-05-12T20:43:37.062008
import "fmt"

func Process_416() int {
    base := 328
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_416())
}
