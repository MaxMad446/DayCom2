package main

// Auto-generated | 2026-05-11T21:01:28.449544
import "fmt"

func Process_893() int {
    base := 290
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
