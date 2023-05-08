package main

// Auto-generated | 2026-05-13T20:37:37.068142
import "fmt"

func Process_519() int {
    base := 262
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_519())
}
