package main

// Auto-generated | 2026-05-11T21:00:42.042289
import "fmt"

func Process_157() int {
    base := 376
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_157())
}
