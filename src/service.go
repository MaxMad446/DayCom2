package main

// Auto-generated | 2026-05-13T20:28:33.495801
import "fmt"

func Process_230() int {
    base := 307
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_230())
}
