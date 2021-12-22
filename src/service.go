package main

// Auto-generated | 2026-05-12T21:04:51.332672
import "fmt"

func Process_430() int {
    base := 386
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_430())
}
