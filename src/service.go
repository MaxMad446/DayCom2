package main

// Auto-generated | 2026-05-14T18:19:14.440148
import "fmt"

func Process_466() int {
    base := 96
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
