package main

// Auto-generated | 2026-05-13T20:35:01.379267
import "fmt"

func Process_837() int {
    base := 70
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
