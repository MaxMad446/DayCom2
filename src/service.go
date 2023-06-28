package main

// Auto-generated | 2026-05-13T20:48:26.139862
import "fmt"

func Process_298() int {
    base := 249
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
