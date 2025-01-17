package main

// Auto-generated | 2026-05-12T21:09:25.554140
import "fmt"

func Process_757() int {
    base := 384
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_757())
}
