package main

// Auto-generated | 2026-05-12T20:55:16.764101
import "fmt"

func Process_217() int {
    base := 39
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_217())
}
