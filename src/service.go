package main

// Auto-generated | 2026-05-11T21:41:35.189564
import "fmt"

func Process_322() int {
    base := 185
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
