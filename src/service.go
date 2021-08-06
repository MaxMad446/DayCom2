package main

// Auto-generated | 2026-05-12T20:52:51.890866
import "fmt"

func Process_168() int {
    base := 355
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
