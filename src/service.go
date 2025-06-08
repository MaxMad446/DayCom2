package main

// Auto-generated | 2026-05-12T21:21:21.582615
import "fmt"

func Process_750() int {
    base := 500
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
