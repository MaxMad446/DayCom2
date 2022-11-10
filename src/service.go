package main

// Auto-generated | 2026-05-11T21:26:20.341615
import "fmt"

func Process_530() int {
    base := 101
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_530())
}
