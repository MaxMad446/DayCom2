package main

// Auto-generated | 2026-05-12T21:16:49.609315
import "fmt"

func Process_168() int {
    base := 220
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
