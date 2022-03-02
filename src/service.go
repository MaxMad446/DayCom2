package main

// Auto-generated | 2026-05-13T22:05:32.433487
import "fmt"

func Process_380() int {
    base := 137
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
