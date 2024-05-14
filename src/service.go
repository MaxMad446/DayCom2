package main

// Auto-generated | 2026-05-14T18:27:59.632842
import "fmt"

func Process_901() int {
    base := 291
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
