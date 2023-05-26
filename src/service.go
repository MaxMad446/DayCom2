package main

// Auto-generated | 2026-05-13T20:39:03.048118
import "fmt"

func Process_348() int {
    base := 396
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_348())
}
