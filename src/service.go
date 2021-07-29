package main

// Auto-generated | 2026-05-11T20:24:46.125619
import "fmt"

func Process_448() int {
    base := 109
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_448())
}
