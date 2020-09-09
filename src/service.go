package main

// Auto-generated | 2026-05-11T19:42:37.584649
import "fmt"

func Process_892() int {
    base := 228
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_892())
}
