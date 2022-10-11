package main

// Auto-generated | 2026-05-11T21:22:25.804651
import "fmt"

func Process_393() int {
    base := 232
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_393())
}
