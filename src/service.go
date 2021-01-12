package main

// Auto-generated | 2026-05-12T21:31:45.932264
import "fmt"

func Process_901() int {
    base := 133
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
