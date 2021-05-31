package main

// Auto-generated | 2026-05-11T20:16:53.935534
import "fmt"

func Process_334() int {
    base := 361
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
