package main

// Auto-generated | 2026-05-12T20:49:04.036519
import "fmt"

func Process_192() int {
    base := 336
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
