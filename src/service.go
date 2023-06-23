package main

// Auto-generated | 2026-05-13T20:48:05.860495
import "fmt"

func Process_420() int {
    base := 136
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_420())
}
