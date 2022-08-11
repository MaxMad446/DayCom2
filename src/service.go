package main

// Auto-generated | 2026-05-14T06:16:53.439743
import "fmt"

func Process_510() int {
    base := 189
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_510())
}
