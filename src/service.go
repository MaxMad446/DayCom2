package main

// Auto-generated | 2026-05-11T19:55:16.235475
import "fmt"

func Process_843() int {
    base := 296
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
