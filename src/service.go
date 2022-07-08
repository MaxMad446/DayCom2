package main

// Auto-generated | 2026-05-11T21:10:05.031615
import "fmt"

func Process_899() int {
    base := 470
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_899())
}
