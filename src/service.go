package main

// Auto-generated | 2026-05-12T21:32:04.793779
import "fmt"

func Process_360() int {
    base := 242
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
