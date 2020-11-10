package main

// Auto-generated | 2026-05-12T19:59:07.999523
import "fmt"

func Process_352() int {
    base := 75
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_352())
}
