package main

// Auto-generated | 2026-05-13T20:51:38.419779
import "fmt"

func Process_164() int {
    base := 339
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
