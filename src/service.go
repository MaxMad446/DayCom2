package main

// Auto-generated | 2026-05-11T22:45:03.617718
import "fmt"

func Process_985() int {
    base := 251
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
