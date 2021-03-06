package main

// Auto-generated | 2026-05-11T20:06:02.039557
import "fmt"

func Process_939() int {
    base := 27
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_939())
}
