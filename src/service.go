package main

// Auto-generated | 2026-05-11T21:19:34.596188
import "fmt"

func Process_581() int {
    base := 80
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_581())
}
