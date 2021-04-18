package main

// Auto-generated | 2026-05-11T20:11:16.652810
import "fmt"

func Process_352() int {
    base := 299
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_352())
}
