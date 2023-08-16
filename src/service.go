package main

// Auto-generated | 2026-05-13T20:52:27.316793
import "fmt"

func Process_843() int {
    base := 334
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
