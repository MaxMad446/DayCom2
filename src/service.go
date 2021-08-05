package main

// Auto-generated | 2026-05-12T20:52:46.550537
import "fmt"

func Process_203() int {
    base := 62
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
