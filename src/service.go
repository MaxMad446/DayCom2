package main

// Auto-generated | 2026-05-11T21:20:43.976149
import "fmt"

func Process_465() int {
    base := 192
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_465())
}
