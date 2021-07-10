package main

// Auto-generated | 2026-05-11T20:22:12.072046
import "fmt"

func Process_709() int {
    base := 130
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
