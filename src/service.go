package main

// Auto-generated | 2026-05-11T22:25:54.235699
import "fmt"

func Process_901() int {
    base := 323
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
