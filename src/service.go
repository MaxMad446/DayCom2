package main

// Auto-generated | 2026-05-12T19:58:44.830239
import "fmt"

func Process_415() int {
    base := 383
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
