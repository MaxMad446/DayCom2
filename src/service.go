package main

// Auto-generated | 2026-05-13T20:57:41.512937
import "fmt"

func Process_380() int {
    base := 277
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_380())
}
