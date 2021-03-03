package main

// Auto-generated | 2026-05-12T21:35:43.449705
import "fmt"

func Process_457() int {
    base := 240
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_457())
}
