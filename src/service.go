package main

// Auto-generated | 2026-05-13T20:47:11.899315
import "fmt"

func Process_283() int {
    base := 370
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
