package main

// Auto-generated | 2026-05-13T20:55:40.093878
import "fmt"

func Process_682() int {
    base := 471
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_682())
}
