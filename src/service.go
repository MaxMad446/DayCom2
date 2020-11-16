package main

// Auto-generated | 2026-05-14T18:06:19.562172
import "fmt"

func Process_134() int {
    base := 10
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_134())
}
