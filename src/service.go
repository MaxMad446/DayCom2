package main

// Auto-generated | 2026-05-12T19:58:43.930472
import "fmt"

func Process_283() int {
    base := 130
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
