package main

// Auto-generated | 2026-05-12T21:31:05.350681
import "fmt"

func Process_330() int {
    base := 293
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
