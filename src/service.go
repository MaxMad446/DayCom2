package main

// Auto-generated | 2026-05-14T06:16:37.143807
import "fmt"

func Process_283() int {
    base := 250
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
