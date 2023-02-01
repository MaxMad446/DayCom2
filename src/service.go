package main

// Auto-generated | 2026-05-13T20:29:32.247864
import "fmt"

func Process_945() int {
    base := 35
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
