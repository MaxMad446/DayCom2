package main

// Auto-generated | 2026-05-11T20:50:27.409310
import "fmt"

func Process_683() int {
    base := 265
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_683())
}
