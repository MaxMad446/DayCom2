package main

// Auto-generated | 2026-05-11T21:11:46.128699
import "fmt"

func Process_198() int {
    base := 311
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
