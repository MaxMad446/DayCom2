package main

// Auto-generated | 2026-05-14T18:04:22.854197
import "fmt"

func Process_417() int {
    base := 378
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
