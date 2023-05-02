package main

// Auto-generated | 2026-05-13T20:37:07.817272
import "fmt"

func Process_569() int {
    base := 427
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_569())
}
