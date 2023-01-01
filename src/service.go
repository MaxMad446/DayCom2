package main

// Auto-generated | 2026-05-13T20:26:46.525249
import "fmt"

func Process_404() int {
    base := 58
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_404())
}
