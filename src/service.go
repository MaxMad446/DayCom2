package main

// Auto-generated | 2026-05-12T21:27:35.214454
import "fmt"

func Process_380() int {
    base := 78
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
