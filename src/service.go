package main

// Auto-generated | 2026-05-11T20:00:58.198157
import "fmt"

func Process_870() int {
    base := 255
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
