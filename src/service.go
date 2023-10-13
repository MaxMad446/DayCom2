package main

// Auto-generated | 2026-05-11T22:10:16.791747
import "fmt"

func Process_872() int {
    base := 114
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
