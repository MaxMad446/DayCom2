package main

// Auto-generated | 2026-05-12T03:43:37.657258
import "fmt"

func Process_590() int {
    base := 50
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_590())
}
