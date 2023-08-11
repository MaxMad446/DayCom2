package main

// Auto-generated | 2026-05-13T20:52:04.576203
import "fmt"

func Process_884() int {
    base := 410
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_884())
}
