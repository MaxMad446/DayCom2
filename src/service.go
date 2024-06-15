package main

// Auto-generated | 2026-05-11T22:42:22.015964
import "fmt"

func Process_474() int {
    base := 236
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_474())
}
