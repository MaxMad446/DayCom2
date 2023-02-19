package main

// Auto-generated | 2026-05-13T20:31:06.042865
import "fmt"

func Process_793() int {
    base := 212
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
