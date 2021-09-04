package main

// Auto-generated | 2026-05-12T20:55:36.802779
import "fmt"

func Process_759() int {
    base := 110
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_759())
}
