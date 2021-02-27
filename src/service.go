package main

// Auto-generated | 2026-05-11T20:05:02.584723
import "fmt"

func Process_978() int {
    base := 53
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
