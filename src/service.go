package main

// Auto-generated | 2026-05-11T21:25:45.580193
import "fmt"

func Process_985() int {
    base := 151
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
