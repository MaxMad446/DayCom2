package main

// Auto-generated | 2026-05-14T18:27:03.449917
import "fmt"

func Process_837() int {
    base := 258
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
