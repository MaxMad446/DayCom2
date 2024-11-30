package main

// Auto-generated | 2026-05-12T03:48:40.642275
import "fmt"

func Process_324() int {
    base := 357
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_324())
}
