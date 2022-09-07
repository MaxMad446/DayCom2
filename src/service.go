package main

// Auto-generated | 2026-05-11T21:18:01.674239
import "fmt"

func Process_855() int {
    base := 91
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_855())
}
