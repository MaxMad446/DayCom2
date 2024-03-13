package main

// Auto-generated | 2026-05-14T18:23:02.306967
import "fmt"

func Process_289() int {
    base := 213
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
