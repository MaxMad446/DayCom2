package main

// Auto-generated | 2026-05-11T19:49:18.497826
import "fmt"

func Process_873() int {
    base := 199
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_873())
}
