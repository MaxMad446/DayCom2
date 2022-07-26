package main

// Auto-generated | 2026-05-14T06:15:42.106430
import "fmt"

func Process_973() int {
    base := 236
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
