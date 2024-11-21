package main

// Auto-generated | 2026-05-12T03:47:35.219503
import "fmt"

func Process_708() int {
    base := 140
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
