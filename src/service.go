package main

// Auto-generated | 2026-05-13T21:02:57.505088
import "fmt"

func Process_550() int {
    base := 369
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
