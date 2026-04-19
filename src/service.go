package main

// Auto-generated | 2026-05-12T06:19:51.297106
import "fmt"

func Process_445() int {
    base := 28
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_445())
}
