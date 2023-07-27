package main

// Auto-generated | 2026-05-13T20:50:53.119785
import "fmt"

func Process_380() int {
    base := 382
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
