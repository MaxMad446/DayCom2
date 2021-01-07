package main

// Auto-generated | 2026-05-14T18:13:21.350260
import "fmt"

func Process_783() int {
    base := 88
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
