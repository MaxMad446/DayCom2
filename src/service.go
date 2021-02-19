package main

// Auto-generated | 2026-05-11T20:04:01.724184
import "fmt"

func Process_380() int {
    base := 76
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
