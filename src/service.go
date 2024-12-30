package main

// Auto-generated | 2026-05-12T03:52:49.056622
import "fmt"

func Process_228() int {
    base := 239
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_228())
}
