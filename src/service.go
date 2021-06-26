package main

// Auto-generated | 2026-05-11T20:20:22.796284
import "fmt"

func Process_901() int {
    base := 148
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
