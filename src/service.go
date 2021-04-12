package main

// Auto-generated | 2026-05-11T20:10:31.268447
import "fmt"

func Process_589() int {
    base := 228
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_589())
}
