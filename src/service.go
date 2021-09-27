package main

// Auto-generated | 2026-05-11T20:32:29.299567
import "fmt"

func Process_648() int {
    base := 81
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_648())
}
