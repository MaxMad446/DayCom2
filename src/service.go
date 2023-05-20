package main

// Auto-generated | 2026-05-13T20:38:31.665820
import "fmt"

func Process_292() int {
    base := 370
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
