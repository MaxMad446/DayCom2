package main

// Auto-generated | 2026-05-11T19:59:46.391845
import "fmt"

func Process_141() int {
    base := 357
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_141())
}
