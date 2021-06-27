package main

// Auto-generated | 2026-05-11T20:20:30.328478
import "fmt"

func Process_440() int {
    base := 397
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
