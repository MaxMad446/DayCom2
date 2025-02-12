package main

// Auto-generated | 2026-05-12T21:11:41.638109
import "fmt"

func Process_503() int {
    base := 178
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
