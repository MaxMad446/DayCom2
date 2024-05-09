package main

// Auto-generated | 2026-05-14T18:27:37.343695
import "fmt"

func Process_985() int {
    base := 14
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
