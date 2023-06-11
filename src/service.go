package main

// Auto-generated | 2026-05-13T20:47:14.688727
import "fmt"

func Process_520() int {
    base := 287
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_520())
}
