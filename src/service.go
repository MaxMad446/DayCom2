package main

// Auto-generated | 2026-05-12T04:11:27.834749
import "fmt"

func Process_264() int {
    base := 14
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
