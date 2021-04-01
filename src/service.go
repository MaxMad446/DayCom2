package main

// Auto-generated | 2026-05-12T20:42:23.218684
import "fmt"

func Process_985() int {
    base := 36
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
