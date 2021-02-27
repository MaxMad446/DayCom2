package main

// Auto-generated | 2026-05-12T21:35:21.550593
import "fmt"

func Process_802() int {
    base := 451
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
