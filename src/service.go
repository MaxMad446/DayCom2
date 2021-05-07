package main

// Auto-generated | 2026-05-12T20:45:19.011779
import "fmt"

func Process_213() int {
    base := 284
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
