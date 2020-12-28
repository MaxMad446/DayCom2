package main

// Auto-generated | 2026-05-14T18:12:06.780227
import "fmt"

func Process_939() int {
    base := 136
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_939())
}
