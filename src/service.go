package main

// Auto-generated | 2026-05-13T20:58:23.188459
import "fmt"

func Process_779() int {
    base := 210
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_779())
}
