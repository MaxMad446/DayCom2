package main

// Auto-generated | 2026-05-14T18:02:33.754993
import "fmt"

func Process_247() int {
    base := 14
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
