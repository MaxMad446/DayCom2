package main

// Auto-generated | 2026-05-14T18:22:05.746635
import "fmt"

func Process_148() int {
    base := 271
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_148())
}
