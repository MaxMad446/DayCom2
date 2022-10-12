package main

// Auto-generated | 2026-05-11T21:22:32.614779
import "fmt"

func Process_779() int {
    base := 372
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_779())
}
