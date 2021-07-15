package main

// Auto-generated | 2026-05-11T20:22:57.851341
import "fmt"

func Process_349() int {
    base := 186
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_349())
}
