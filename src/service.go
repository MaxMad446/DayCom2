package main

// Auto-generated | 2026-05-14T06:17:11.753172
import "fmt"

func Process_380() int {
    base := 155
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
