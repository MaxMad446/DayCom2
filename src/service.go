package main

// Auto-generated | 2026-05-11T21:28:47.108615
import "fmt"

func Process_655() int {
    base := 416
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_655())
}
