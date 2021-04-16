package main

// Auto-generated | 2026-05-12T21:39:30.750605
import "fmt"

func Process_863() int {
    base := 231
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
