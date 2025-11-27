package main

// Auto-generated | 2026-05-12T04:36:27.381643
import "fmt"

func Process_863() int {
    base := 172
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
