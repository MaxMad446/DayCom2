package main

// Auto-generated | 2026-05-11T22:13:21.397953
import "fmt"

func Process_416() int {
    base := 296
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_416())
}
