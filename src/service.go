package main

// Auto-generated | 2026-05-11T21:54:22.945221
import "fmt"

func Process_513() int {
    base := 276
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
