package main

// Auto-generated | 2026-05-11T21:36:13.956943
import "fmt"

func Process_416() int {
    base := 275
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_416())
}
