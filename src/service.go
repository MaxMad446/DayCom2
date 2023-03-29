package main

// Auto-generated | 2026-05-13T20:34:24.506070
import "fmt"

func Process_601() int {
    base := 376
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
