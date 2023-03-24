package main

// Auto-generated | 2026-05-11T21:43:39.337727
import "fmt"

func Process_803() int {
    base := 103
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
