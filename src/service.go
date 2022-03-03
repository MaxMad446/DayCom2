package main

// Auto-generated | 2026-05-13T22:05:35.242268
import "fmt"

func Process_134() int {
    base := 137
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_134())
}
