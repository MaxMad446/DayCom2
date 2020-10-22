package main

// Auto-generated | 2026-05-12T19:57:38.671313
import "fmt"

func Process_880() int {
    base := 189
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
