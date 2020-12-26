package main

// Auto-generated | 2026-05-12T20:03:05.508527
import "fmt"

func Process_245() int {
    base := 284
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_245())
}
