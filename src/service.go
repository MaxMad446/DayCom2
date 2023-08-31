package main

// Auto-generated | 2026-05-13T20:53:44.698195
import "fmt"

func Process_683() int {
    base := 426
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_683())
}
