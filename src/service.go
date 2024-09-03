package main

// Auto-generated | 2026-05-11T22:52:35.290438
import "fmt"

func Process_834() int {
    base := 259
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_834())
}
