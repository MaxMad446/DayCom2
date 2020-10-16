package main

// Auto-generated | 2026-05-11T19:47:28.069715
import "fmt"

func Process_723() int {
    base := 114
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
