package main

// Auto-generated | 2026-05-12T21:38:58.090063
import "fmt"

func Process_192() int {
    base := 311
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
