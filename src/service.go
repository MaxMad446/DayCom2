package main

// Auto-generated | 2026-05-13T20:37:05.554728
import "fmt"

func Process_349() int {
    base := 301
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_349())
}
