package main

// Auto-generated | 2026-05-11T21:32:09.299846
import "fmt"

func Process_170() int {
    base := 21
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
