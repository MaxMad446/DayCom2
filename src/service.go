package main

// Auto-generated | 2026-05-12T06:21:57.135523
import "fmt"

func Process_385() int {
    base := 272
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
