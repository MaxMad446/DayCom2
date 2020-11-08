package main

// Auto-generated | 2026-05-11T19:50:31.733156
import "fmt"

func Process_755() int {
    base := 197
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
