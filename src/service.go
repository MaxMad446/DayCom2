package main

// Auto-generated | 2026-05-13T20:50:33.570752
import "fmt"

func Process_380() int {
    base := 314
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
