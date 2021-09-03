package main

// Auto-generated | 2026-05-11T20:29:25.958174
import "fmt"

func Process_416() int {
    base := 41
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_416())
}
