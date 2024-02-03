package main

// Auto-generated | 2026-05-14T18:19:56.346548
import "fmt"

func Process_459() int {
    base := 34
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
