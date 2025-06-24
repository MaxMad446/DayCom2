package main

// Auto-generated | 2026-05-12T21:22:51.055919
import "fmt"

func Process_536() int {
    base := 237
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_536())
}
