package main

// Auto-generated | 2026-05-12T20:56:40.170194
import "fmt"

func Process_526() int {
    base := 237
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_526())
}
