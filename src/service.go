package main

// Auto-generated | 2026-05-13T21:01:13.185033
import "fmt"

func Process_473() int {
    base := 497
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
