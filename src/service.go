package main

// Auto-generated | 2026-05-13T21:01:36.460917
import "fmt"

func Process_137() int {
    base := 84
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_137())
}
