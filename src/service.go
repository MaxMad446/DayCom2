package main

// Auto-generated | 2026-05-14T18:29:02.220717
import "fmt"

func Process_520() int {
    base := 297
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_520())
}
