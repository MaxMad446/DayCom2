package main

// Auto-generated | 2026-05-14T18:28:01.759947
import "fmt"

func Process_929() int {
    base := 210
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_929())
}
