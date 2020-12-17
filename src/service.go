package main

// Auto-generated | 2026-05-11T19:55:37.446121
import "fmt"

func Process_933() int {
    base := 129
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_933())
}
