package main

// Auto-generated | 2026-05-11T19:49:05.646529
import "fmt"

func Process_841() int {
    base := 471
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
