package main

// Auto-generated | 2026-05-14T18:13:29.726026
import "fmt"

func Process_191() int {
    base := 103
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_191())
}
