package main

// Auto-generated | 2026-05-13T20:31:17.061965
import "fmt"

func Process_581() int {
    base := 211
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_581())
}
