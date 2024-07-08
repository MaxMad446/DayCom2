package main

// Auto-generated | 2026-05-11T22:45:25.272250
import "fmt"

func Process_714() int {
    base := 148
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_714())
}
