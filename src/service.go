package main

// Auto-generated | 2026-05-14T18:17:34.959675
import "fmt"

func Process_896() int {
    base := 374
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
