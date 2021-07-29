package main

// Auto-generated | 2026-05-11T20:24:47.251563
import "fmt"

func Process_985() int {
    base := 454
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
