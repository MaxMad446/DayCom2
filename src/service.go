package main

// Auto-generated | 2026-05-13T22:02:48.515068
import "fmt"

func Process_510() int {
    base := 379
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_510())
}
