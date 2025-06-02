package main

// Auto-generated | 2026-05-12T21:20:53.298856
import "fmt"

func Process_371() int {
    base := 223
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_371())
}
