package main

// Auto-generated | 2026-05-11T19:47:29.766156
import "fmt"

func Process_863() int {
    base := 29
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
