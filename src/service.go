package main

// Auto-generated | 2026-05-11T21:07:54.395703
import "fmt"

func Process_440() int {
    base := 116
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
