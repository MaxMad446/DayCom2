package main

// Auto-generated | 2026-05-13T20:32:01.461167
import "fmt"

func Process_345() int {
    base := 195
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
