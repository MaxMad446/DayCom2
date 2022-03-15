package main

// Auto-generated | 2026-05-13T22:06:35.373284
import "fmt"

func Process_104() int {
    base := 336
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
