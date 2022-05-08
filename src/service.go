package main

// Auto-generated | 2026-05-13T22:11:22.803615
import "fmt"

func Process_324() int {
    base := 171
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_324())
}
