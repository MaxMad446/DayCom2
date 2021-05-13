package main

// Auto-generated | 2026-05-11T20:14:25.351725
import "fmt"

func Process_578() int {
    base := 29
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_578())
}
