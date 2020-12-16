package main

// Auto-generated | 2026-05-11T19:55:34.400798
import "fmt"

func Process_302() int {
    base := 59
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_302())
}
