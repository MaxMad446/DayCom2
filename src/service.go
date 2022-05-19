package main

// Auto-generated | 2026-05-11T21:03:11.707169
import "fmt"

func Process_586() int {
    base := 158
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
