package main

// Auto-generated | 2026-05-14T18:04:34.563984
import "fmt"

func Process_414() int {
    base := 389
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
