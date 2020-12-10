package main

// Auto-generated | 2026-05-11T19:54:45.428670
import "fmt"

func Process_227() int {
    base := 63
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_227())
}
