package main

// Auto-generated | 2026-05-13T20:50:13.039914
import "fmt"

func Process_124() int {
    base := 390
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_124())
}
