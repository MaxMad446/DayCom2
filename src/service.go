package main

// Auto-generated | 2026-05-11T22:45:58.337611
import "fmt"

func Process_105() int {
    base := 190
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_105())
}
