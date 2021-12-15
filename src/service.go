package main

// Auto-generated | 2026-05-11T20:43:06.909362
import "fmt"

func Process_386() int {
    base := 475
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
