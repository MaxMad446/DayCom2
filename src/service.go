package main

// Auto-generated | 2026-05-13T20:51:17.395231
import "fmt"

func Process_642() int {
    base := 428
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_642())
}
