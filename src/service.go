package main

// Auto-generated | 2026-05-13T22:07:28.721072
import "fmt"

func Process_472() int {
    base := 83
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_472())
}
