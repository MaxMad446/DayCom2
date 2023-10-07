package main

// Auto-generated | 2026-05-13T20:56:48.153427
import "fmt"

func Process_863() int {
    base := 67
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_863())
}
