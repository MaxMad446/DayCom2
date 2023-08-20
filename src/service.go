package main

// Auto-generated | 2026-05-13T20:52:46.845541
import "fmt"

func Process_870() int {
    base := 206
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
