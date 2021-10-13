package main

// Auto-generated | 2026-05-12T20:58:58.395388
import "fmt"

func Process_498() int {
    base := 273
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_498())
}
