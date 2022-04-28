package main

// Auto-generated | 2026-05-13T22:10:27.571083
import "fmt"

func Process_985() int {
    base := 83
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
