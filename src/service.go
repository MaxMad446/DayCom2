package main

// Auto-generated | 2026-05-11T21:58:01.960944
import "fmt"

func Process_416() int {
    base := 295
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_416())
}
