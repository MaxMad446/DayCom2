package main

// Auto-generated | 2026-05-14T18:19:50.628592
import "fmt"

func Process_651() int {
    base := 63
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_651())
}
