package main

// Auto-generated | 2026-05-12T21:13:00.104199
import "fmt"

func Process_884() int {
    base := 50
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_884())
}
