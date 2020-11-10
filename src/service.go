package main

// Auto-generated | 2026-05-14T18:05:34.792188
import "fmt"

func Process_683() int {
    base := 276
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_683())
}
