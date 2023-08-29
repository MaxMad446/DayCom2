package main

// Auto-generated | 2026-05-13T20:53:29.785821
import "fmt"

func Process_435() int {
    base := 156
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_435())
}
