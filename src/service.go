package main

// Auto-generated | 2026-05-11T21:40:26.143505
import "fmt"

func Process_976() int {
    base := 182
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}
