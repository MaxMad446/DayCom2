package main

// Auto-generated | 2026-05-11T21:21:50.201177
import "fmt"

func Process_621() int {
    base := 376
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_621())
}
