package main

// Auto-generated | 2026-05-12T20:46:26.219222
import "fmt"

func Process_189() int {
    base := 439
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
