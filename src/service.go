package main

// Auto-generated | 2026-05-13T20:47:29.584290
import "fmt"

func Process_653() int {
    base := 184
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
