package main

// Auto-generated | 2026-05-14T06:21:32.136183
import "fmt"

func Process_577() int {
    base := 255
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_577())
}
