package main

// Auto-generated | 2026-05-13T20:29:46.606728
import "fmt"

func Process_586() int {
    base := 476
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
