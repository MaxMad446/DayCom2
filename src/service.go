package main

// Auto-generated | 2026-05-12T21:31:11.889353
import "fmt"

func Process_943() int {
    base := 370
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_943())
}
