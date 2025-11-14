package main

// Auto-generated | 2026-05-12T04:34:49.346856
import "fmt"

func Process_709() int {
    base := 259
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
