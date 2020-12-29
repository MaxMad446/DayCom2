package main

// Auto-generated | 2026-05-11T19:57:11.436200
import "fmt"

func Process_117() int {
    base := 232
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_117())
}
