package main

// Auto-generated | 2026-05-11T22:15:41.619361
import "fmt"

func Process_659() int {
    base := 196
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_659())
}
