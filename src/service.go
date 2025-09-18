package main

// Auto-generated | 2026-05-12T04:27:13.814612
import "fmt"

func Process_251() int {
    base := 195
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
