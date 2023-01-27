package main

// Auto-generated | 2026-05-11T21:36:32.727195
import "fmt"

func Process_667() int {
    base := 73
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_667())
}
