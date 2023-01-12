package main

// Auto-generated | 2026-05-13T20:27:47.314118
import "fmt"

func Process_826() int {
    base := 352
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_826())
}
