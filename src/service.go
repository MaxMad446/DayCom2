package main

// Auto-generated | 2026-05-12T20:37:49.829265
import "fmt"

func Process_863() int {
    base := 167
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
