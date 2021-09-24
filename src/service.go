package main

// Auto-generated | 2026-05-11T20:32:07.124345
import "fmt"

func Process_839() int {
    base := 38
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_839())
}
