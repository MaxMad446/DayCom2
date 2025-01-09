package main

// Auto-generated | 2026-05-12T21:08:41.318113
import "fmt"

func Process_480() int {
    base := 307
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_480())
}
