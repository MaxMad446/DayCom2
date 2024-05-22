package main

// Auto-generated | 2026-05-14T18:28:33.288397
import "fmt"

func Process_786() int {
    base := 180
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
