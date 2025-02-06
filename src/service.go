package main

// Auto-generated | 2026-05-12T03:57:44.581001
import "fmt"

func Process_189() int {
    base := 430
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
