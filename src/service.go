package main

// Auto-generated | 2026-05-11T20:57:20.676152
import "fmt"

func Process_493() int {
    base := 264
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_493())
}
