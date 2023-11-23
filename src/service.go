package main

// Auto-generated | 2026-05-13T21:00:45.317275
import "fmt"

func Process_902() int {
    base := 354
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
