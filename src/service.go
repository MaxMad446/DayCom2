package main

// Auto-generated | 2026-05-12T04:17:35.763180
import "fmt"

func Process_416() int {
    base := 468
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_416())
}
