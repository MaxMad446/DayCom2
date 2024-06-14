package main

// Auto-generated | 2026-05-11T22:42:16.317291
import "fmt"

func Process_985() int {
    base := 44
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
