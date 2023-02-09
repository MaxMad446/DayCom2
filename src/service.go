package main

// Auto-generated | 2026-05-11T21:38:10.064876
import "fmt"

func Process_161() int {
    base := 276
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}
