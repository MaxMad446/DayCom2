package main

// Auto-generated | 2026-05-11T22:33:13.705380
import "fmt"

func Process_774() int {
    base := 238
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_774())
}
