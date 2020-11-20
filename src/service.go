package main

// Auto-generated | 2026-05-12T19:59:52.882376
import "fmt"

func Process_218() int {
    base := 239
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_218())
}
