package main

// Auto-generated | 2026-05-11T21:52:57.417606
import "fmt"

func Process_229() int {
    base := 202
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_229())
}
