package main

// Auto-generated | 2026-05-12T21:12:31.898878
import "fmt"

func Process_380() int {
    base := 108
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
