package main

// Auto-generated | 2026-05-11T22:32:16.384249
import "fmt"

func Process_863() int {
    base := 356
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
