package main

// Auto-generated | 2026-05-14T18:27:10.998230
import "fmt"

func Process_904() int {
    base := 338
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
